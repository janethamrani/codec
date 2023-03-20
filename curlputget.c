//Code to upload image to localhost and retrieve
#include <stdio.h>
#include <curl/curl.h>

int main(int argc, char *argv[]) {
  CURL *curl;
  CURLcode res;
  FILE *fp;
  char *url = "http://localhost:80/upload_image";
  char *filename = "image.png";

  /* open the image file */
  fp = fopen(filename, "rb");
  if (fp == NULL) {
    fprintf(stderr, "Error opening image file %s\n", filename);
    return 1;
  }

  /* initialize curl */
  curl = curl_easy_init();
  if (curl) {
    /* set the URL */
    curl_easy_setopt(curl, CURLOPT_URL, url);

    /* set the POST data */
    curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, 1L);
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "");

    /* set the file to upload */
    curl_easy_setopt(curl, CURLOPT_READDATA, fp);
    curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);

    /* perform the request */
    res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
      fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
    }

    /* cleanup */
    curl_easy_cleanup(curl);
  }

  /* close the image file */
  fclose(fp);

  /* retrieve the uploaded image */
  curl = curl_easy_init();
  if (curl) {
    /* set the URL */
    curl_easy_setopt(curl, CURLOPT_URL, url);

    /* set the output file */
    fp = fopen("image_copy.jpg", "wb");
    if (fp == NULL) {
      fprintf(stderr, "Error creating output file\n");
      return 1;
    }
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

    /* perform the request */
    res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
      fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
    }

    /* cleanup */
  curl_easy_cleanup(curl);
  }  
  
fclose(fp);
  return 0;
}

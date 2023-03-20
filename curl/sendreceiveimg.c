#Code to send the receive image file (png)
#Not working -- 
/*<title>405 Method Not Allowed</title>
</head><body>
<h1>Method Not Allowed</h1>
<p>The requested method PUT is not allowed for this URL.</p>
*/


#include <stdio.h>
#include <curl/curl.h>
#include <sys/stat.h>
int main(int argc, char *argv[]) {
  CURL *curl;
  CURLcode res;
  FILE *fp;
  char *url = "http://localhost:80/";
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
  struct stat file_info;
  /* retrieve the uploaded image */
  curl = curl_easy_init();
    if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:80");

    /* send a POST request */
    curl_easy_setopt(curl, CURLOPT_POST, 1L);

    /* set the image data to be sent */
    fp = fopen("image_copy.jpg", "rb");
    if (fp) {
      if (fstat(fileno(fp), &file_info) == 0) {
        curl_easy_setopt(curl, CURLOPT_READDATA, fp);
        curl_easy_setopt(curl, CURLOPT_INFILESIZE_LARGE, (curl_off_t)file_info.st_size);
    } }

    /* perform the request */
    res = curl_easy_perform(curl);
  // if (curl) {
  //   /* set the URL */
  //   curl_easy_setopt(curl, CURLOPT_URL, url);

  //   /* set the output file */
  //   fp = fopen("image_copy.jpg", "wb");
  //   if (fp == NULL) {
  //     fprintf(stderr, "Error creating output file\n");
  //     return 1;
  //   }
  //   curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

  //   /* perform the request */
  //   res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
      fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
    }

    /* cleanup */
  curl_easy_cleanup(curl);
  }  
  
fclose(fp);
  return 0;
}

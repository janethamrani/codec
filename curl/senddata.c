#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <iostream>
#include <vector>
int main()
{
// Initialize curl
curl_global_init(CURL_GLOBAL_ALL);// Create a curl handle
CURL* curl = curl_easy_init();
if (curl)
{
// Set the URL to send data to
curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:80");// Set the POST data
std::vector<int> data = {1, 2, 3, 4, 5};
curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.data());// Perform the request
CURLcode res = curl_easy_perform(curl);
if (res != CURLE_OK)
{
// Handle the error
std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
}// Cleanup
curl_easy_cleanup(curl);
 }// Cleanup global curl state
curl_global_cleanup();return 0;
}

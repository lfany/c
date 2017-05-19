#include <stdio.h>
#include <string.h>
#include <curl/curl.h>

int main() {
    printf("Hello, World!\n");

    CURL *hnd = curl_easy_init();

    curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "GET");
    curl_easy_setopt(hnd, CURLOPT_URL, "https://api.leancloud.cn/1.1/classes/Image?order=-publishedAt");

    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "postman-token: e606fe9e-150a-3afc-a1b4-0f5a0a0ee508");
    headers = curl_slist_append(headers, "cache-control: no-cache");
    headers = curl_slist_append(headers, "accept-encoding: gzip");
    headers = curl_slist_append(headers, "connection: Keep-Alive");
    headers = curl_slist_append(headers, "host: api.leancloud.cn");
    headers = curl_slist_append(headers, "x-android-rs: 1");
    headers = curl_slist_append(headers, "x-lc-sign: 089b4b28b08d9a35f7979da95ddba96b,1464180979055");
    headers = curl_slist_append(headers, "user-agent: AVOS Cloud android-v3.13.4 SDK");
    headers = curl_slist_append(headers, "content-type: application/json; charset=utf-8");
    headers = curl_slist_append(headers, "accept: application/json");
    headers = curl_slist_append(headers, "x-lc-id: DUJAEqBT2GPvc0Yi9zugSx1P-gzGzoHsz");
    headers = curl_slist_append(headers, "x-lc-prod: 1");
    curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

    CURLcode ret = curl_easy_perform(hnd);

    curl_slist_free_all(headers);

    printf("status: %d", ret);

    return 0;
}
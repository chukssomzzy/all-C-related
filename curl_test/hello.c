#include <stdio.h>
#include <curl/curl.h>

/**
 * main - test curl
 * Return: 1 or 0
 */

int main(void)
{
	CURL *curl;
	CURLcode res;

	curl = curl_easy_init();
	if (curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, "https://www.example.com/");
		res = curl_easy_perform(curl);
		if (res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform() failed: %s\n",
					curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}
	return (0);
}

#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0;
	int spaces = 0;
	int numbers = 0;
	int others = 0;
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z') {
			letters++;
		}
		else if (c == ' ') {
			spaces++;
		}
		else if (c >= '0' && c <= '9') {
			numbers++;
		}
		else {
			others++;
		}
	}
	printf("letters=%d,space=%d,numbers=%d,others=%d", letters, spaces, numbers, others);
}
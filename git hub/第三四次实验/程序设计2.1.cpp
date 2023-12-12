//(1)编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，否则返回 - 1。在主程序中输入字符串s1与s2，调用函数实现。
//函数原型：int indexof(const char* s1, const char* s2);
#include<iostream>
#include<string>
using namespace std;

int indexOf(const char  *s1, const char *s2)
{
	if (s1[0] == 0)
	{
		return 0;
	}
	for (int i = 0; s2[i]; i++)
	{
		int l = i, j = 0;
		for (; s1[j]; j++, l++)
		{
			if (s2[l] != s1[j])
			{
				break;
			}
		}
		if (s1[j] == 0)
		{
			return i;
		}
	}

	return -1;
}

int main() {
	int len1 = 10000;
	char s1[10000];
	char s2[10000];
	const char* s3 = s1;
	const char* s4 = s2;
	cout << "Enter the first string:";
	cin.getline(s1, len1);
	cout << "Enter the second string:";
	cin.getline(s2, len1);
	int l1 = strlen(s1);
	int l = strlen(s2);
	cout << "indexOf(¡°" << s1 << "¡±£¬¡°" << s2 << "¡±)is";
	for (int i = 0; i < l1; i++)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s1[i] += 32;
		}
	}
	for (int i = 0; i < l; i++)
	{
		if (s2[i] >= 'A' && s2[i] <= 'Z')
		{
			s2[i] += 32;
		}
	}


	cout << indexOf(s3, s4);
	return 0;
}
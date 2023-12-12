//5、检验子串：
//编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
//int indexOf(const char s1[], const char s2[])
//编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。下面是程序的运行样例：
//
//


#include<iostream>
#include<string>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
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
	char s3[10000];
	//ÊäÈë×Ö·û´®1
	cout << "Enter the first string:";
	cin.getline(s1, len1);
	cout << "Enter the second string:";
	cin.getline(s2, len1);
	copy(begin(s2), end(s2), begin(s3));
	int l1 = strlen(s1);
	int l = strlen(s2);

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

	cout << "indexOf(¡°" << s1 << "¡±£¬¡°" << s3 << "¡±)is" << indexOf(s1, s2);
	return 0;
}
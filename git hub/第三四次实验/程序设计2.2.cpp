//(2)��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�����ԭ�� int parseHex(const char* const hexString);
//�磺���ú��� parseHex(��A5��); ����165
#include<iostream>
#include<string>

using namespace std;

int parseHex(const char* const hexString) {
	int len = strlen(hexString);
	int res = 0;
	for (int i = 0; i < len; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'Z') {
			int a = (hexString[i] - 'A' + 10) * (len - i - 1) * 16;
			res += a;
		}
		else
		{
			res += hexString[i] - '0';
		}
	}

	return res;
}

int main() {
	const char* const num = "A5";
	cout << parseHex(num);

	return 0;
}
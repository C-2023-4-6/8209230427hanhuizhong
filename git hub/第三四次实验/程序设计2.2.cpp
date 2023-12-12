//(2)编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。函数原型 int parseHex(const char* const hexString);
//如：调用函数 parseHex(“A5”); 返回165
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
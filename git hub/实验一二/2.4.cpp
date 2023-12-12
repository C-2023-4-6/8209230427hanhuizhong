#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	cout << "请输入a,b的值：" << endl;
	cin >> a;
	cin >> b;
	if (a == 0 && b != 0)
	{
		cout << "b/a运算错误" << endl;
	}
	else if (a != 0 && b == 0)
	{
		cout << "a/b运算错误" << endl;
	}
	else
	{
		cout << "加运算a+b=" << a + b << endl;
		cout << "减运算a-b=" << a - b << endl;
		cout << "乘运算a*b=" << a * b << endl;
		cout << "a/b=" << a / b << endl;
		cout << "取余a%b=" << a % b << endl;
		cout << "运算符非法:" << "axb" << endl;
	}
}
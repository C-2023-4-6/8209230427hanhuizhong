#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	cout << "������a,b��ֵ��" << endl;
	cin >> a;
	cin >> b;
	if (a == 0 && b != 0)
	{
		cout << "b/a�������" << endl;
	}
	else if (a != 0 && b == 0)
	{
		cout << "a/b�������" << endl;
	}
	else
	{
		cout << "������a+b=" << a + b << endl;
		cout << "������a-b=" << a - b << endl;
		cout << "������a*b=" << a * b << endl;
		cout << "a/b=" << a / b << endl;
		cout << "ȡ��a%b=" << a % b << endl;
		cout << "������Ƿ�:" << "axb" << endl;
	}
}
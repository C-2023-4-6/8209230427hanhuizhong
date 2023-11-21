#include<iostream>
using namespace std;
int main()
{
	char z,Z;
	char x;
	cout << "请输入一个字母" << endl;
	cin >> x;
	if (x >= 'a' && x <= 'z')
	{
		Z = x;
		cout << "转换为大写字母是：" << Z << endl;
	}
	else
	{
		cout << x + 1 << endl;
	}



}


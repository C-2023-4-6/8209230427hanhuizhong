#include<iostream>
using namespace std;
int main()
{
	char z,Z;
	char x;
	cout << "������һ����ĸ" << endl;
	cin >> x;
	if (x >= 'a' && x <= 'z')
	{
		Z = x;
		cout << "ת��Ϊ��д��ĸ�ǣ�" << Z << endl;
	}
	else
	{
		cout << x + 1 << endl;
	}



}


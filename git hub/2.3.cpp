#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "���������������߳���" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c || a + c <= b || b + c <= a || a - c >= b || a - b >= c || b - c >= a || c - a >= b || b - a >= c || c - b >= a)
	{
		cout << "��Ǹ�޷�����������" << endl;
	}
	else if (a == b || a == c || b == c)
	{
		cout << "��������Ϊ����������" << endl;
		cout << "�������ܳ�Ϊ��" << a + b + c << endl;
	}
	else {
		cout << "�������β��ǵ���������" << endl;
		cout << "�������ܳ�Ϊ��" << a + b + c << endl;
	}
}
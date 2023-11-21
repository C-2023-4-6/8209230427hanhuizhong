#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入三角形三边长：" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c || a + c <= b || b + c <= a || a - c >= b || a - b >= c || b - c >= a || c - a >= b || b - a >= c || c - b >= a)
	{
		cout << "抱歉无法构成三角形" << endl;
	}
	else if (a == b || a == c || b == c)
	{
		cout << "此三角形为等腰三角形" << endl;
		cout << "三角形周长为：" << a + b + c << endl;
	}
	else {
		cout << "此三角形不是等腰三角行" << endl;
		cout << "三角形周长为：" << a + b + c << endl;
	}
}
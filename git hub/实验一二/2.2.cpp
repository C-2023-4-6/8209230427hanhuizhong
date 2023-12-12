#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	double x = 0;
	double y = 0;
	for (i = 0; i < 9; i++)
	{
		cout << "请为x输入一个数字：" << endl;
		cin >> x;
		if (0 < x && x < 1)
		{
			y = 3 - 2 * x;
			cout << "y=" << y << endl;
		}
		else if (1 <= x && x < 5)
		{
			y = 2 / (4 * x) + 1;
			cout << "y=" << y << endl;
		}
		else if (5 <= x && x < 10)
		{
			y = x * x;
			cout << "y=" << y << endl;
		}
	}




}
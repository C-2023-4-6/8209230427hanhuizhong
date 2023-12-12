//1、输入自然数m和n，
//（1）求他们的最大公约数（或称最大公因数）。
//要求输入、输出在主函数中进行，求公约数由函数实现。
//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）

#include<iostream>
using namespace std;
int max(int a, int b);
int min(int a, int b);
int max(int a, int b)
{
	int i;
	i = (a < b) ? a : b;//取两者中较小的
	for (i; a % i != 0 || b % i != 0;)
	{
		i--;
	}
	return i;
}
int min(int a, int b)
{
	int i;
	i = (a > b) ? a : b;//取两者中较大的
	for (i; i % a != 0 || i % b != 0; )
	{
		i++;
	}
	return i;
}


int main()
{
	int x = 0;
	int y = 0;
	cout << "请输入x" << x << endl;
	cin >> x;
	cout << "请输入y" << y << endl;
	cin >> y;
	int q = max(x, y);
	cout << "最大公约数为" << q << endl;
	int p = min(x, y);
	cout << "最小公倍数为" << p << endl;


}

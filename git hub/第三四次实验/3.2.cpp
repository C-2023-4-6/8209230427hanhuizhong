//2.   编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
//bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
//利用函数is_prime找出前200个素数，并按每行10个输出：
//2     3      5      7    11    13    17    19    23    29

#include<iostream>
using namespace std;
/*
bool is_prime(int num)
{
	int i = 2;
	for (i; i < num;)
	{
		if (num % i == 0)
		{
			cout << "不是素数" << endl;
			return 0;
		}
		i++;
	}
	cout << "是素数" << endl;
	return num;
}
int main()
{
	int a=0;
	cout << "请输入一个数" <<a<<endl;
	cin >> a;
	int s =  is_prime(a);
}
*/
bool is_prime(int num)
{
	int i = 2;
	for (int c = 2; c <= 200; c++)
	{
		for (i; i < num;)
		{
			if (num % i != 0)
			{
				cout << "不是素数" << endl;
				return 0;
			}
			i++;
		}

		cout << num << endl;
	}
	return num;
}
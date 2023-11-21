#include<iostream>
using namespace std;
int main()
{
	float a = 0;
	cout << "请输入华氏温度：" << endl;
	cin >> a;
	float b;
	b = (a - 32) / 1.8;
	cout << "输入的华氏温度转化为摄氏温度为：" << b << endl;
}

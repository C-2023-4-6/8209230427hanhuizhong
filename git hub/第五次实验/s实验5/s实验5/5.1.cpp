﻿//1、有以下程序：
//#include<iostream>
//using namespace std；
//class Time             // 定义Time类
//{
//	public：              // 数据成员为公用的
//		int hour;
//	int minute;
//	int sec ;
//};
//int main()
//{
//	Time tl;           //定义t1为Time类对象
//	cin >> t1.hour;      //输入设定的时间 
//	cin >> t1.minute;
//	cin >> t1.sec;
//	cout << t1.hourl << ”：” << t1.minute << ”：” << t1.sec << endl ;
//	return 0;
//}
//改写程序，要求：
//(1)将数据成员改为私有的；
//(2)将输入和输出的功能改为由成员函数实现；
//(3)在类体内定义成员函数。
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Time             // 定义Time类
{
    private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void SetTime(int h, int m, int s);
};
 
void Time :: SetTime(int h, int m, int s)
{
	hour = h, minute = m, sec = s;
	cout << hour << ":" << minute << ":" << sec << endl;
	
}
	
int main()
{
	
	Time t1;
	t1.SetTime(10, 15, 10);
}

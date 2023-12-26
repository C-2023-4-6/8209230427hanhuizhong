#include<iostream>
#include<string>
using namespace std;
class Student              //类声明
{
private:
	int num;
	string name;
	string sex;
public:                   //公用成员函数原型声明
	void display();
	void set_value();

};
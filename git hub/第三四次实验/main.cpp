#include<iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	double d, e, f;
	cout << "请输入三条边" << endl;
	cin >> d;
	cin >> e;
	cin >> f;



	cout << "三角形面积为" << _area(d,e,f) <<endl;
	

	return 0;
}
#include<iostream>
#include"mytriangle.h"
using namespace std;

bool is_valid(double side1, double side2, double side3)

{
	double a;
	double b;
	double c;
	//a>b>c 
	if ( side1 > side2)
	{   
		if ( side2 >  side3)
		{
			a =  side1;
			b =  side2;
			c =  side3;
		}
		else if ( side1 >  side3)
		{
			a =  side1;
			b =  side3;
			c =  side2;
		}
		else
		{
			a =  side3;
			b =  side1;
			c =  side2;
		}
	}
	else if ( side1 >  side3)
	{
		a =  side2;
		b =  side1;
		c =  side3;
	}
	else if ( side2 >  side3)
	{
		a =  side2;
		b =  side3;
		c =  side1;
	}
	else
	{
		a =  side3;
		b =  side2;
		c =  side1;
	}
	//a>b>c
	if (b + c > a && a - c < b)
	{
		double s;
		double t;
		s = (a+b+c) / 2.0;
		t = sqrt(s * (s - a)*(s - b)*(s - c));
		return s;
	}
	else
	{
		cout << "ÐÅÏ¢´íÎó" << endl;
	}
	
}
double _area(double side1, double side2, double side3)
{
	double s, area;
	s = (side1 + side2 + side3) / 2.0;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}

 
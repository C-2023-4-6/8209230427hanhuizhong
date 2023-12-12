#include<iostream>
using namespace std;
int main()
{
	int a = 2;
	int i = 0;
	int sum=2;
	for (;a <= 100;)
	{
		i++;
		sum = a + a * 2;
		a = a * 2;
		if (a > 100)
		{
			a = a / 2;
			cout << a << endl;
			sum = sum - a;
			break;
		}
		
		
	}
	
	cout << a << endl;
	cout << i << endl;
	cout << sum << endl;
	cout << sum * 0.8 / i<< endl;
}
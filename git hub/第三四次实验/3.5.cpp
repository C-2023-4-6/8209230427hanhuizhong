#include<iostream>
using namespace std;
int a = 1;
int monkey(int number)
{
	
	if (a > 9) {
		return number;
	}
	a++;
	return (monkey(number)+1) * 2;
}

int main()
{
	printf("%d", monkey(1));   //���ʣ�µ�����
	return 0;

}
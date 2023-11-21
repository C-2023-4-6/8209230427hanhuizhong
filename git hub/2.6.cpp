#include<stdio.h>
using namespace std;
int main()
{
	int m;
	int n;
	int temp;
	int num1;
	int num2;
	scanf_s("%d %d", &m, &n);
	num1 = m;
	num2 = n;
	if (num1 >= num2) {
		while (n != 0) {
			temp = m % n;
			m = n;
			n = temp;
		}
		printf("最大公约数为：%d", m);
		printf("最小公倍数为：%d", num1 * num2 / m);
	}
	else if (num1 < num2) {
		while (m != 0) {
			temp = n % m;
			n = m;
			m = temp;
		}
		printf("最大公约数为：%d\n", n);
		printf("最小公倍数为：%d", num1 * num2 / n);
	}
}
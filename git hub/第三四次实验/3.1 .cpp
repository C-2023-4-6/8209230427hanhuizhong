//1��������Ȼ��m��n��
//��1�������ǵ����Լ������������������
//Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
//��2���ں����������Լ������С������������ʾ��ʹ�����ò�����

#include<iostream>
using namespace std;
int max(int a, int b);
int min(int a, int b);
int max(int a, int b)
{
	int i;
	i = (a < b) ? a : b;//ȡ�����н�С��
	for (i; a % i != 0 || b % i != 0;)
	{
		i--;
	}
	return i;
}
int min(int a, int b)
{
	int i;
	i = (a > b) ? a : b;//ȡ�����нϴ��
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
	cout << "������x" << x << endl;
	cin >> x;
	cout << "������y" << y << endl;
	cin >> y;
	int q = max(x, y);
	cout << "���Լ��Ϊ" << q << endl;
	int p = min(x, y);
	cout << "��С������Ϊ" << p << endl;


}

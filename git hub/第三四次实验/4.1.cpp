//1����ӡ��ͬ������
//��дһ�����򣬶���10������������в�ͬ�����������һ�������ֶ�Σ�ֻ��ӡһ�Σ���
//��ʾ��������������һ���µ�ֵ���������һ�����顣���򣬽��䶪����������Ϻ������б���ľ��ǲ�ͬ������
//������һ������������
//Enter ten numbers : 1 2 3 2 1 6 3 4 5 2
//The distinct numbers are : 1 2 3 6 4 5
#include<iostream>
#include<string>
using namespace std;


int i = 0;
int j = 1;
int a = 0;
int newnumber(const int list[10])
{
	int list2[10]{};
	for (i; i < sizeof list[10] / 4-1;i++)
	{
		for (i,j;j< sizeof list[10] / 4 - 2;)
		{
			if (list[i] == list[j])
			{
				
				list[j] = list[j + 1];          //ɾ��list[j]
				j++;
			}
		}
	}
}

int main()
{
	int arr[10] = { 1 ,2, 3, 2 ,1 ,6 ,3, 4 ,5, 2 };
	
}
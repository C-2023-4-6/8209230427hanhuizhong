//2����������
//�������������㷨��дһ�������������������㷨�������˶�������д���ÿ�˴����У�������Ԫ�ؽ��бȽϡ���Ϊ�����򽻻������򣬱���ԭ˳�򡣴˼�������Ϊ��������bubble sort�����³�����sinking sort������Ϊ��С��ֵ�𽥵ء�ð�ݡ����ϲ������ϴ�ֵ���³����ײ���
//�㷨���������£�
//bool changed = true;
//do
//{
//	changed = false;
//	for (int j = 0; j < listSize �C 1; j++)
//		if (list[j] > list[j + 1])
//		{
//			swap list[j] with list[j + 1];
//			changed = true;
//		}
//} while (changed);
//�����ԣ�ѭ���������б��Ϊ��������֤��doѭ�����ִ��listSize �C 1�Ρ�
//��д���Գ��򣬶���һ������10��˫�������ֵ����飬���ú�������ʾ���к�����֡�

#include<iostream>
using namespace std;
void paixu(double arr[], double len)
{
		for (double j = 0; j<len - 1; j++)
		{
			for (int i = 0; i<len - 1-j; i++)
			{
				if (arr[i] > arr[i + 1])
				{
					double temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
						//����
				}
			}
		}
}
void daying(double* arr, int len)
{
	for (int a = 0; a< len; a++)
	{
		cout << arr[a] << endl;
	}
}
int main()
{
	double arr[10] = { 4.0,2.0,5.0,9.0,3.0,1.0,10.0,7.0,6.0,8.0 };
	double len = sizeof(arr) / (arr[0]);
	paixu(arr, len);
	daying( arr, len);
}
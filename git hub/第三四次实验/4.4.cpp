//4���ϲ��������кõ����飺
//��д���º������ϲ��������кõ����飬�γ�һ���µ����кõ����顣
//
//ʹ��size1 + size2�αȽ�ʵ�ֺ�������д���Գ�����ʾ�û������������кõ����飬����ʾ�ϲ��Ժ�����顣������һ������������ע�⣬�������ݵĵ�һ�������������Ԫ�����������������һ���֡��ٶ������С������80��
//
#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, a = 0, b = 0;
	int min = size1 >= size2 ? size2 : size1;//С������ϲ����������

	for (; i < size1 + size2; i++)
	{
		if (i < min)
		{
			if (list1[a] > list2[b])
			{
				list3[i] = list2[b];//��С����
				b++;
			}
			else if (list1[a] < list2[b])
			{
				list3[i] = list1[a];

				a++;
			}
			else if (list1[a] == list2[b])
			{
				list3[i] = list1[a];
				list3[i + 1] = list1[a];
				i++;
				a++;
			}
		}

		else
		{
			if (size1 > size2)
			{
				list3[i] = list1[a];
				a++;
			}
			else
			{
				list3[i] = list2[b];
			    b++;
			}
		}
	}
}

int main() {
	int size1, size2;
	int arr[100];
	int arr1[100];
	int arr2[200];
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> arr1[i];
	}

	merge(arr, size1, arr1, size2, arr2);

	cout << "The merged list is ";

	for (int i = 0; i < size1 + size2 - 1; i++)
	{
		cout << arr2[i] << " ";
	}
	return 0;
}


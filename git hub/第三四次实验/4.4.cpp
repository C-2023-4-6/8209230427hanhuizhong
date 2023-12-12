//4、合并两个排列好的数组：
//编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
//
//使用size1 + size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。下面是一个运行样例。注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。
//
#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, a = 0, b = 0;
	int min = size1 >= size2 ? size2 : size1;//小的数组合并到大的数组

	for (; i < size1 + size2; i++)
	{
		if (i < min)
		{
			if (list1[a] > list2[b])
			{
				list3[i] = list2[b];//最小数组
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


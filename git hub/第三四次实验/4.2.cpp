//2、起泡排序：
//利用起泡排序算法编写一个排序函数。起泡排序算法分若干趟对数组进行处理。每趟处理中，对相邻元素进行比较。若为降序，则交换；否则，保持原顺序。此技术被称为起泡排序（bubble sort）或下沉排序（sinking sort），因为较小的值逐渐地“冒泡”到上部，而较大值逐渐下沉到底部。
//算法可描述如下：
//bool changed = true;
//do
//{
//	changed = false;
//	for (int j = 0; j < listSize – 1; j++)
//		if (list[j] > list[j + 1])
//		{
//			swap list[j] with list[j + 1];
//			changed = true;
//		}
//} while (changed);
//很明显，循环结束后，列表变为升序。容易证明do循环最多执行listSize – 1次。
//编写测试程序，读入一个含有10个双精度数字的数组，调用函数并显示排列后的数字。

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
						//交换
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
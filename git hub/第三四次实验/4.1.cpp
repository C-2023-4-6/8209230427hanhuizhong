//1、打印不同的数：
//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
//提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。
//下面是一个运行样例：
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
				
				list[j] = list[j + 1];          //删除list[j]
				j++;
			}
		}
	}
}

int main()
{
	int arr[10] = { 1 ,2, 3, 2 ,1 ,6 ,3, 4 ,5, 2 };
	
}
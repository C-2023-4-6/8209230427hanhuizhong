//(4)�����������������ܱ�֤p[0]���1��p[1]���2������޸��Ա�֤֮����ʾ���ں���f��ʹ��new���ɶ�̬���飻��main����delete�ͷš���
//#include<iostream>
//using namespace std;
//int* f()
//{
//	int list[] = { 1,2,3,4 };
//	return list;
//}
//void main()
//{
//	int* p = f();
//	cout << p[0] << endl;
//	cout << p[1] << endl;
//}
#include<iostream>
using namespace std;
int* f()
{
	int* list = new int[4];
	for (int i = 1; i <= 4; i++)
	{
		list[i - 1] = i;
	}
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;

	delete[]p;
}

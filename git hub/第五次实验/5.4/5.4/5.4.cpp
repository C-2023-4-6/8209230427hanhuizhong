//4������һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ���������һ������max����ָ������ָ����������������max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�
#include<iostream>
using namespace std;
class Student
{
public:
	int num;
	int goal;
	Student(int, int);
	void max(Student*s);   //ָ������ָ��������
};
Student::Student(int a = 0, int b = 0)
{
	num = a;
	goal = b;
}

void max(Student*s) {
	Student mm = s[0];
	for (int i = 0; i < 5; i++)

	{
		if (s[i].goal > mm.goal)    //�Ƚϳɼ�
		{
			mm = s[i];
		}
		cout << mm.num << endl;
	}


}
int main()
{
	Student s1[5] = {

			Student(1,20),
			Student(2,40),
			Student(3,80),
			Student(4,50),
			Student(5,33) };
	 max(s1);

	 return 0;
}








//4、建立一个对象数组，内放5个学生的（学号，成绩），设立一个函数max，用指向对象的指针作函数参数，在max函数中找出5个学生的最高成绩者，并输出其学号。
#include<iostream>
using namespace std;
class Student
{
public:
	int num;
	int goal;
	Student(int, int);
	void max(Student*s);   //指向对象的指针做参数
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
		if (s[i].goal > mm.goal)    //比较成绩
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








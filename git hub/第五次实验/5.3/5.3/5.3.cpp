//3����Ҫ��3������������������һ�����ڶ���ĳ������ݳ�Ա����length(��)��width(��),height(��)��Ҫ���ó�Ա����ʵ�����¹��ܣ�
//(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
//(2)���㳤�����������
//(3)���3���������������
//�������ϻ�����
#include<iostream>
using namespace std;
class V
{
public:



	void setdata(int length, int width, int height) 
	{
		m_length = length;
		m_width = width;
		m_height = height;
	}
	void setdata2(int length, int width, int height)
	{
		m_length2 = length;
		m_width2 = width;
		m_height2 = height;
	}
	void setdata3(int length, int width, int height)
	{
		m_length3 = length;
		m_width3= width;
		m_height3 = height;
	}
		int volume1()
		{
			cout << "���볤���" << endl;
			cin >> m_length;
			cin >> m_width;
			cin >> m_height;
			int volume = m_length * m_width * m_height;
			return volume;
	     }
		int volume2()
		{
			cout << "���볤���" << endl;
			cin >> m_length2;
			cin >> m_width2;
			cin >> m_height2;
			int volume2 = m_length2 * m_width2 * m_height2;
			return volume2;
		}
		int volume3()
		{
			cout << "���볤���" << endl;
			cin >> m_length3;
			cin >> m_width3;
			cin >> m_height3;
			int volume3 = m_length3 * m_width3 * m_height3;
			return volume3;
		}

private:
	int m_length;
	int m_width;
	int m_height;

	int m_length2;
	int m_width2;
	int m_height2;

	int m_length3;
	int m_width3;
	int m_height3;
};

int main()
{
	V c;
	cout<<"�����"<<c.volume1()<<endl;
	cout << "�����" << c.volume2() << endl;
	cout << "�����" << c.volume3() << endl;
}
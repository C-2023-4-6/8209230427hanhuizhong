//3、需要求3个长方柱的体积，请编一个基于对象的程序。数据成员包括length(长)、width(宽),height(高)。要求用成员函数实现以下功能：
//(1)由键盘分别输入3个长方柱的长、宽、高；
//(2)计算长方柱的体积；
//(3)输出3个长方柱的体积。
//请编程序，上机调试
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
			cout << "输入长宽高" << endl;
			cin >> m_length;
			cin >> m_width;
			cin >> m_height;
			int volume = m_length * m_width * m_height;
			return volume;
	     }
		int volume2()
		{
			cout << "输入长宽高" << endl;
			cin >> m_length2;
			cin >> m_width2;
			cin >> m_height2;
			int volume2 = m_length2 * m_width2 * m_height2;
			return volume2;
		}
		int volume3()
		{
			cout << "输入长宽高" << endl;
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
	cout<<"体积："<<c.volume1()<<endl;
	cout << "体积：" << c.volume2() << endl;
	cout << "体积：" << c.volume3() << endl;
}
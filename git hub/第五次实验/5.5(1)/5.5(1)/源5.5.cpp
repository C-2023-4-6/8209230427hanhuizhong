//5������һ������������Point����˽�б���x��y����һ�����(x,y)����ֵ�����д����ʵ�����¹��ܣ����ù��캯�����ݲ�����
//�ڶ������ʱ��x��y����ֵ��ʼ��Ϊ��60,80�������ù��г�Ա����void setPoint(int i, int j)������ֵ�޸�Ϊ(60+i,80+j)��
//���ù��г�Ա����display()����޸ĺ������ֵ����������ͨ�����������֤����������
#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point(int a = 60, int b = 80) {
		x = a;
		y = b;
	}

	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}

	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	point setA;
	int X, Y;
	cout << "����һ��iֵ" << endl;
	cin >> X;
	cout << "����һ��jֵ" << endl;
	cin >> Y;
	setA.setPoint(X, Y);
	setA.display();
}
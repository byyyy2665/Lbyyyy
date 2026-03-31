#include<iostream>
#include<cmath>

#include "point.h"
#include "circle.h"

//判断点是否在圆上
using namespace std;

//class point
//{
//public:
//	void setX(int x)
//	{
//		m_x = x;
//	}
//
//	int getX()
//	{
//		return m_x;
//	}
//
//	void setY(int y)
//	{
//		m_y = y;
//	}
//
//	int getY()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//	int c_x;
//	int c_y;
//};

//class circle
//{
//public:
//	void setradius(int r)
//	{
//		m_R = r;
//	}
//
//	int getradius()
//	{
//		return m_R;
//	}
//
//	void setcenter(point center)
//	{
//		m_center = center;
//	}
//
//	point getcenter()
//	{
//		return m_center;
//	}
//
//private: 
//	int m_R;
//	point m_center;
//};

void judge(point pc, point p1, circle c)
{
	int x = p1.getX();
	int y = p1.getY();

	int xc = pc.getX();
	int yc = pc.getY();

	int d = pow((x - xc), 2) + pow((y - yc), 2);
	int r = pow(c.getradius(),2);

	if (r == d)
	{
		cout << "此点在圆上" << endl;
	}
	else if (r > d)
	{
		cout << "此点在圆内" << endl;
	}
	else
		cout << "此点在圆外" << endl;

}

int main()
{
	point p1,pc;

	int x, y, xc, yc;
	cin >> xc >> yc;
	cin >> x >> y;
	p1.setX(x);//点
	p1.setY(y);
	pc.setX(xc);//圆心
	pc.setY(yc);
	

	circle c;
	int r;
	cin >> r;
	c.setradius(r);
	c.setcenter(pc);//圆心

	judge(pc,p1,c);
	return 0;
}
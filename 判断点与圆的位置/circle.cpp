#include"circle.h"

//利用circle::告诉编译器以下函数是属于circle的，而不是全局函数


void circle::setradius(int r)
{
	m_R = r;
}

int circle::getradius()
{
	return m_R;
}

void circle::setcenter(point center)
{
	m_center = center;
}

point circle::getcenter()
{
	return m_center;
}


#include "point.h"


//class 定义只能写一次，不能同时出现在.h 和.cpp 里：
	//.h 头文件：只写类的声明（class + 成员变量 + 函数声明）
	//.cpp 源文件：只写函数的实现（删掉 class、删掉 private、删掉 public）


//利用point::告诉编译器以下函数是属于point的，而不是全局函数


void  point::setX(int x)
{
	m_x = x;
}

int point::getX()
{
	return m_x;
}

void point::setY(int y)
{
	m_y = y;
}

int point::getY()
{
	return m_y;
}


	
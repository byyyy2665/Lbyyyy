#pragma once

#include<iostream>
//在头文件创建中只要写函数的声明，函数的实现到源文件里补充
class point
{
public:
	void setX(int x);
	
	int getX();
	
	void setY(int y);
	
	int getY();
	

private:
	int m_x;
	int m_y;
	int c_x;
	int c_y;
};

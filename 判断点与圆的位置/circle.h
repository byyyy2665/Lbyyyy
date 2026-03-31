#pragma once

#include "point.h"

class circle
{
public:
	void setradius(int r);
	
	int getradius();
	
	void setcenter(point center);
	
	point getcenter();
	

private:
	int m_R;
	point m_center;
};
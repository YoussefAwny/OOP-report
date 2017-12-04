#include<iostream>

#pragma once
using namespace std;
class CColor
{
	
public:
	int red, green, blue;
	int Color;
	CColor(int r, int g, int b);
	CColor(int hexcolor);
	CColor();
	friend ostream &operator<<(ostream &output, CColor &a);
    string CColor::operator()(string x);
};


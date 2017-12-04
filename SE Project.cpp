// SE Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Color.h"
#include<iostream>

CColor average(CColor a, CColor b, CColor c);


int main()
{
	CColor a(255/*red*/, 128/*green*/, 192/*blue*/);
	CColor b(0x00667755); //red: 0x66, green: 0x77, blue: 0x55
	CColor c(0x00552211);
	cout << "a color = " << a << endl; //should prints (255, 128, 192)
//	cout << "b color = " << b("hex") << endl; //should prints 0x00667755
											  //Make y = average of a and b and c
	CColor y = average(a, b, c);
	cout << "y color = " << y << endl;
    return 0;
}

CColor average(CColor a, CColor b, CColor c) 
{
	CColor avg;
	avg.red = (a.red + b.red + c.red) / 3;
	avg.green = (a.green + b.green + c.green) / 3;
	avg.blue = (a.blue + b.blue + c.blue) / 3;
	return avg;

}
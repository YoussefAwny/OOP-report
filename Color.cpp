#include "stdafx.h"
#include "Color.h"
#include<iostream>

using namespace std;


CColor::CColor(int r, int g, int b)
{
	red = r;
	green = g;
	blue = b;

}

CColor::CColor(int hexcolor)
{
	Color = hexcolor;
	red = (hexcolor & 0x00FF0000)>>4;
	green = (hexcolor & 0x0000FF00)>>2;
	blue = (hexcolor & 0x000000FF);
}


CColor::CColor()
{
	red = 0;
	green = 0;
	blue = 0;
}

string CColor::operator()(string x)
{
	string Printout = "0x";
	while (Color%16)
	{
		switch (Color % 16)
		{
		case 1: Printout += '1'; Color /= 16; break;
		case 2: Printout += '2'; Color /= 16; break;
		case 3: Printout += '3'; Color /= 16; break;
		case 4: Printout += '4'; Color /= 16; break;
		case 5: Printout += '5'; Color /= 16; break;
		case 6: Printout += '6'; Color /= 16; break;
		case 7: Printout += '7'; Color /= 16; break;
		case 8: Printout += '8'; Color /= 16; break;
		case 9: Printout += '9'; Color /= 16; break;
		case 10: Printout += 'A'; Color /= 16; break;
		case 11: Printout += 'B'; Color /= 16; break;
		case 12: Printout += 'C'; Color /= 16; break;
		case 13: Printout += 'D'; Color /= 16; break;
		case 14: Printout += 'E'; Color /= 16; break;
		case 15: Printout += 'F'; Color /= 16; break;



		}
	}

	return string();
}


ostream & operator<<(ostream &output, CColor &a)
{
	output << "(" << a.red << ", " << a.green << ", " << a.blue << ")";
	return output;
}

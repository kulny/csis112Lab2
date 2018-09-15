#include "Rectangle.h"
#include <iostream>

double Rectangle::CalcArea()
{
	return length * width;
}

double Rectangle::CalcPerimeter()
{
	return (length * 2) + (width * 2);
}

Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}

void Rectangle::SetLength(double l)
{
	if (l > 0)
	{
		length = l;
	}
	else
	{
		length = -1;
	}
}

void Rectangle::SetWidth(double w)
{
	if (w > 0)
	{
		width = w;
	}
	else
	{
		width = -1;
	}
}

double Rectangle::GetLength()
{
	return length;
}

double Rectangle::GetWidth()
{
	return width;
}

void Rectangle::ShowData()
{
	std::cout << "Length is " << length << std::endl;
	std::cout << "Width is " << width << std::endl;
	std::cout << "Area is " << CalcArea() << std::endl;
	std::cout << "Perimeter is " << CalcPerimeter() << std::endl;
}

bool Rectangle::RecIsGood()
{
	if (length < 0 || width < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

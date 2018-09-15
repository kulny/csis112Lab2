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

Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
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

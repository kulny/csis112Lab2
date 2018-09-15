#pragma once
class Rectangle
{
private:
	// Vars
	double length;
	double width;

	// Class Operations 
	double CalcArea();
	double CalcPerimeter();

public:
	Rectangle();
	Rectangle(double l, double w);

	// Setters
	void SetLength(int l);
	void SetWidth(int w);

	// Getters
	double GetLength();
	double GetWidth();

	// Other
	void ShowData();
};


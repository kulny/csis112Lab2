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

	// Setters
	void SetLength(double l);
	void SetWidth(double w);

	// Getters
	double GetLength();
	double GetWidth();

	// Other
	void ShowData();
	bool RecIsGood();
};


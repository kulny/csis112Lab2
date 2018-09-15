//Rectangle Class -- find information about rectangles 
//CSIS 112-2
//<Sources if necessary>


//Include statements
#include <iostream>
#include <string>
#include "Rectangle.h"


using namespace std;

//Global declarations: Constants and type definitions only -- NO variables

//Function prototypes
bool InputFilter(double in);
bool EndOfInputStream(istream &input);
double InputLoop(string s);

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Cody Moore -- Lab Number 2" << endl << endl;

	//Variable declarations
	Rectangle rec;
	double length;
	double width;

	//Program logic

	length = InputLoop("length");

	rec.SetLength(length);

	width = InputLoop("width");

	rec.SetWidth(width);

	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions

bool EndOfInputStream(istream &input) // checks if ctrl z input
{
	bool endOfInput{ false };
	if (input.eof())
		endOfInput = true;

	return endOfInput;

}

double InputLoop(string s)
{
	double d;

	do
	{
		cout << "Please input the " << s << " of the Rectangle." << endl;
		cin >> d;
		if (EndOfInputStream(cin))
		{
			exit(0);
		}
	} while (!InputFilter(d));
	 
	return d;
}

bool InputFilter(double in)
{
	if (cin.fail() || in < 0) //Check for invalid data (non-numerics, negatives)
	{
		cout << "You must enter a number, and that number must be positive.  Please try again. " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		/*cout << "\nEnter a number (Ctrl-Z to exit):  ";
		cin >> in;*/
		return false;
	}
	else
	{
		return true;
	}
}

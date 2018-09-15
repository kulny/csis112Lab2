//Rectangle Class -- find information about rectangles 
//CSIS 112-2
//<Sources if necessary>


//Include statements
#include <iostream>
#include <string>
#include "Rectangle.h"
#include <cctype>


using namespace std;

//Global declarations: Constants and type definitions only -- NO variables

//Function prototypes
bool InputFilter(double in);
bool EndOfInputStream(istream &input);
double InputLoop(string s);
bool InputFilterS(string s);

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Cody Moore -- Lab Number 2" << endl << endl;

	//Variable declarations
	Rectangle rec;
	double length;
	double width;

	//Program logic

	do // loops the program until ctrl z input
	{
		length = InputLoop("length");

		rec.SetLength(length);

		width = InputLoop("width");
	
		rec.SetWidth(width);

		rec.ShowData();
	} while (!EndOfInputStream(cin));
	

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
	string line;

	do
	{
		cout << "Please input the " << s << " of the Rectangle." << endl;
		//cin >> d;
		getline(cin, line, '\n');

		if (EndOfInputStream(cin))
		{
			exit(0);
		}
	} while (!InputFilterS(line)); // loops the input query if error given
	 
	return stod(line);
}

bool InputFilterS(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			cout << "You cannot have letters in the input. Please try again." << endl;
			return false;
		} // checks if there are any letters in the input
	}
	return InputFilter(stod(s)); // checks if input is positive and nonzero
}

bool InputFilter(double in)
{
	if (cin.fail() || in < 0) //Check for invalid data (non-numerics, negatives)
	{
		cout << "You must enter a number, and that number must be positive.  Please try again. " << endl;
		cin.clear();
		//cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
	else
	{
		return true;
	}
}

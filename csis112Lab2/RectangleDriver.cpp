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
	string line;

	do
	{
		cout << "Please input the " << s << " of the Rectangle." << endl;
		//cin >> d;
		getline(cin, line, '\n');
		for (int i = 0; i < line.length; i++)
		{
			
			if (isalpha(line[i]))
			{
				cout << "alphabet";
			}
		}
		try
		{
			stod(line);
		}
		catch (const invalid_argument)
		{
			cout << "You cannot have letters in the input.";
		}
		catch (const out_of_range)
		{
			cout << "You cannot have letters in the input.";
		}
		if (EndOfInputStream(cin))
		{
			exit(0);
		}
	} while (!InputFilter(stod(line))); // loops the input query if error given
	 
	return stod(line);
}

bool InputFilter(double in)
{
	if (cin.fail() || in < 0) //Check for invalid data (non-numerics, negatives)
	{
		cout << "You must enter a number, and that number must be positive.  Please try again. " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
	else
	{
		return true;
	}
}

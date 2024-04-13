/*
In this code, we will get a number from user than write on the screen which day is today according to the number.

Developer: Barış Someroğlu
Date: 13.04.2024 - 08:20 pm
*/


#include <iostream>
#include <string>

using namespace std;

// Prototype declaration for function
void Result(int);
string NumberToDay(int);

// Global variable
string Day;

int main()
{
	int Number;
	
	// Get number from user
	cout << "Please Enter a Number = ";
	cin >> Number;

	// Call the function
	Result(Number);

	return 0;
}

// Function declaration
void Result(int Number)
{
	cout << NumberToDay(Number) << endl;
}

// Function declaration
string NumberToDay(int Number)
{

	switch (Number)
	{
	case 1: Day = "Today is Monday!"; break;

	case 2: Day = "Today is Tuesday!"; break;

	case 3: Day = "Today is Wednesday!"; break;

	case 4: Day = "Today is Thursday!"; break;

	case 5: Day = "Today is Friday!"; break;

	case 6: Day = "Today is Saturday!"; break;

	case 7: Day = "Today is Sunday!"; break;

	default: Day = "Please Enter a Number between 1-7 !"; break;
	}

	return Day;
}

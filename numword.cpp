#include <iostream>

using namespace std;
int numout (int numerals)
{
	if (numerals < 0) numerals = numerals-(2*numerals);
	if (numerals > 9 && numerals < 20)
	{
		switch (numerals)
		{
			case 10:
				cout << "ten";
				break;
			case 11:
				cout << "eleven";
				break;
			case 12:
				cout << "twelve";
				break;
			case 13:
				cout << "thirteen";
				break;
			case 14:
				cout << "fourteen";
				break;
			case 15:
				cout << "fifteen";
				break;
			case 16:
				cout << "sixteen";
				break;
			case 17:
				cout << "seventeen";
				break;
			case 18:
				cout << "eighteen";
				break;
			case 19:
				cout << "nineteen";
				break;
		}
		return 1;
	}
	int tens = numerals/10;
	int ones = numerals%10;
	switch (tens)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			cout << "twenty-";
			break;
		case 3:
			cout << "thirty-";
			break;
		case 4:
			cout << "fourty-";
			break;
		case 5:
			cout << "fifty-";
			break;
		case 6:
			cout << "sixty-";
			break;
		case 7:
			cout << "seventy-";
			break;
		case 8:
			cout << "eighty-";
			break;
		case 9:
			cout << "ninety-";
			break;
	}
	
switch (ones)
	{
		case 0:
			break;
		case 1:
			cout << "one";
			break;
		case 2:
			cout << "two";
			break;
		case 3:
			cout << "three";
			break;
		case 4:
			cout << "four";
			break;
		case 5:
			cout << "five";
			break;
		case 6:
			cout << "six";
			break;
		case 7:
			cout << "seven";
			break;
		case 8:
			cout << "eight";
			break;
		case 9:
			cout << "nine";
			break;
	}
}

main ()
{
	int number;
	cout << "Enter number from -999999 to 999999: ";
	cin >> number;
	cout << "\n";
	if (number < 0) cout << "minus ";
	int six = number/100000;
	if (six != 0)
	{
		numout(six);
		cout << " hundred ";
	}
	int thousand = (number%1000000)/1000;
	if (thousand != 0)
	{
		numout(thousand);
		cout << " thousand, ";
	}
	int hundred = (number%1000)/100;
	if (hundred != 0)
	{
		numout(hundred);
		cout << "-hundred ";
	}
	int ones = number%100;
	if (ones != 0)
	{
		cout << "and ";
		numout(ones);
	}
}
	
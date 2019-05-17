#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number... any number! ";
	cin >> num;
	if ( num < 0 )
	{
		cout << "You entered a negative number\n";
	}
	else if ( num == 0)
	{
		cout << "You entered 0... donut.\n";
	}
	else
	{
		cout << "You entered a positve number\n";
	}
}

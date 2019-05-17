#include <iostream>

using namespace std;

int main ()
{
	float wage = 29;
	for (int year = 2019; year < 2031; ++year)
	{
		cout << year << "\t";
		wage = wage + wage*0.02;
		cout << wage << "\n";
	}
}



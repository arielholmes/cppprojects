#include <iostream>
#include <string>
using namespace std;
const int BOTTLES=99;

int main ()
{
	for (int bottles = BOTTLES; bottles>=1; bottles--)
	{
		cout << bottles << " bottles of beer on the wall, \n";
		cout << bottles << " bottles of beer, \n";
		cout << "You take one down and pass it around,\n";
		cout << bottles-1<< " bottles of beer on the wall!\n\n";
	}
}
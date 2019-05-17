#include <iostream>

using namespace std;

void printNum (int num)
{
	if ( num < 9 )
	{
		cout << num;
		printNum(num+1);
	}
	cout << num;
}

int main ()
{
	printNum (1);
}

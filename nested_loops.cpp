#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 12; i++)
	{
		cout << '\t' << i;
	}
	cout << '\n';
	
	for ( int i = 0; i < 12; ++i)
	{
		cout << i;
		for ( int j = 0; j < 12; ++j)
		{
			cout << '\t' << i * j;
		}
		cout << '\n';
	}
}
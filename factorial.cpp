#include <iostream>

using namespace std;

int factorial (int x)
{
	int cur = x;
	while ( x > 1 )
	{
		cout << x << "*";
		x--;
		cur *= x;
	}
	cout << x << " = " <<  cur;
}

int main ()
{
	int x;
	cout << "Number to multiply? ";
	cin >> x;
	cout << "\n";
	factorial(x);
}

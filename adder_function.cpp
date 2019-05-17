#include <iostream>
#include <string>

using namespace std;

int add (int x, int y)
{
	return x + y;
}


int main()
{
	int a;
	int b;
	cout << "Enter first number to add: ";
	cin >> a;
	cout << "Enter the second number to add: ";
	cin >> b;
	cout << a << " + " << b << " = " << add(a,b);
}

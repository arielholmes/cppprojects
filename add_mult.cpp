#include <iostream>

using namespace std;

int add_mult (int a, int *p_mult)
{
	int b = *p_mult;
	*p_mult = a*b;
	cout << "times " << *p_mult;
	return a+b;
}

int main ()
{
	int a,b = 0;
	cout << "First number: ";
	cin >> a;
	cout << "\nSecond number: ";
	cin >> b;
	int mult = b;
	int add_out = add_mult (a,&mult);
	cout << "\n" << a << " plus " << b << " is " << add_out;
	cout << "\n" << a << " times " << b << " is " << mult;
}


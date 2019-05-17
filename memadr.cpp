#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	cout << "Enter variable A: ";
	cin >> a;
	cout << "\nEnter variable B: ";
	cin >> b;
	int* p_a, *p_b;
	p_a = & a;
	p_b = & b;
	cout << "Memory address for variable A (value " << a << ") is " << p_a;
	cout << "\nMemory address for variable B (value " << b << ") is " << p_b;
	cout << "\n";
	if (p_a < p_b) cout << p_a << " is larger than " << p_b;
	if (p_b < p_a) cout << p_b << " is larger than " << p_a;

}

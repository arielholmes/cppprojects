#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string password;

	cout << "Enter your password: " << "\n";
	getline( cin, password, '\n' );
	if (password == "dog")
	{
		cout << "Access allowed" << "\n";
	}
	else
	{
		cout << "Access denied." << "\n";
		return 0;
	}
}

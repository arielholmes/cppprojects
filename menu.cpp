#include <iostream>
#include <string>
using namespace std;
int main()
{
	int opt = 5;
	do
	{
		cout << "Welcome to the menu! \n\n" << "Choose from the following options:\n";
		cout << "1. I am a dog.\n";
		cout << "2. I am a cat.\n";
		cout << "3. I am a bird.\n";
		cin >> opt;
	} while (opt>3);
	if (opt == 1) 
	{
		cout << "Woof!";
	}
	else if (opt == 2) 
	{
		cout << "Meow!";
	}
	else cout << "Chirp!";
}


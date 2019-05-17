#include <iostream>

using namespace std;

void whole_name (string *p_first_name, string *p_last_name)
{
	cout << "\n" <<*p_first_name << " " << *p_last_name;
}

int main ()
{
	string first, second;
	cout << "What is your first name? ";
	cin >> first;
	cout << "\nWhat is your last name? ";
	cin >> second;
	cout << "\nThanks, your name is ";
	whole_name (& first,& second);
}
	

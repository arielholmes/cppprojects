#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string name1;
	string name2;
	float age1; 
	float age2;
	cout << "Who are you?\n";
	cin >> name1;
	cout << "... And who is that?\n";
	cin >> name2;
	cout << "How old are you, "<<name1 <<"?\n";
	cin >> age1;
	cout << "How old is " << name2<<"?\n";
	cin >> age2;
	cout << "The computer has deduced that ";
	if (age1 > age2)
	{
		cout << "you are " << age1-age2 << " years older than " << name2;
	}
	else if (age1 == age2)
	{
		cout << "you and " << name2 << " are the same age!";
	}
	else
	{
		cout << name2 << " is "<< age2-age1 << " years older than you. \n";
	}
}







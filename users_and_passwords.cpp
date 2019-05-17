#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int begin = 3;
	int lockout = 0;
	string name;
	string password;
	int attempts = begin;
	do 
	{
		cout << "Enter username: ";
		cin >> name;
		cout << "Enter password: ";
		cin >> password;
		if (name=="bob"||"ed")
		{
			if 
			(
				(name=="ed"&&password=="dog")||(name=="bob"&&password=="cat")
			)
			{
				cout << "Access Granted!\n";
				break;
			}
			else 
			{
			cout<<"Wrong Password!\n";
			}
		}
		else
			{
				cout << "Wrong username!\n";
			}			attempts--;
	
	} while (attempts>lockout);
	if (attempts==lockout) cout <<  "Too many incorrect attempts... leaving!\n";
}







#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int randRange (int low, int high)
{
	return rand() % ( high - low +1 ) + low;
}	
	
int main ()
{
	int sides;
	int dices;
	int rolls;
	cout << "How many dice sides?\n";
	cin >> sides;
	cout << "How many dice?\n";
	cin >> dices;
	cout << "How many rolls?\n";
	cin >> rolls;
	cout <<"\n";
	srand(  time( NULL ) );
	for ( rolls; rolls > 0; rolls-- )
	{
		int dice_count = dices;
		int total = 0;
		for (dice_count; dice_count > 0; --dice_count)  
		{
			int output =randRange( 1, sides);
			//cout << "Roll: " << output << "\n";
			total = total + output;
		}
		cout << total << "\t";
	}  
}

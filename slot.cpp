#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int randRange (int low, int high)
{
	return rand() % ( high - low +1 ) + low;
}	
enum FacePicture {
		STAR, HEART, DIAMOND
	};

output (int roll)
{
	switch ( roll )
	{
		case 1:
			cout << "STAR" << "\t" ;
			break;
		case 2:
			cout << "HEART" << "\t" ;
			break;
		case 3:
			cout << "DIAMOND" << "\t" ;
			break;
		default:
			cout << "Error, bad input, quitting\n";
			break;
	}
}

int main ()
{
	srand(  time( NULL ) );
	int spins;
	cout << "How many spins? (0 to exit): \n";
	cin >> spins;
	if (spins == 0)	exit (0);
	while (spins>0, spins--)
		{
		int roll_out1 = randRange (1, 3);
		int roll_out2 = randRange (1, 3);	
		int roll_out3 = randRange (1, 3);
		output (roll_out1);
		output(roll_out2);	
		output (roll_out3);	
		cout << "\n"; 
		if (roll_out1 == roll_out2 && roll_out2 == roll_out3)
		{cout << "Matching 3 !!! \n";
		}
		
	}
}


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
	int guess;
	int correct = 0;
	srand( time ( NULL));
	int output =randRange( 1, 100);
	while (correct!=1)
	{
		cout << "What is your guess?\n";
		cin >> guess;
		int answer;
		if (guess>output) {answer=0;}
		else if (guess<output) {answer=1;}
		else if (guess==output) {answer=2;}
		switch (answer)
		{
			case 0:
				cout << "Lower\n";
				break;
			case 1:
				cout << "Higher\n";
				break;
			case 2:
				correct = 1;
				cout << "You win! The number is " << output;
				break;
		}
	}
}	



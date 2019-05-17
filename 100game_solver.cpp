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
	int correct = 0;
	int attempts = 0;
	int guess;
	int low = 1;
	int high = 99;
	int range;
	int answer;
	srand( time ( NULL));
	int output =randRange( 1, 100);
	while (correct!=1)
	{
		attempts = attempts+1;
		range = high-low;
		range = range /= 2;
		guess = low+range;
		cout << "What is your guess?\n";
		cout << guess << "\n";
		if (guess>output) 
			{
				answer=0;
			}
		else if (guess<output)
			{
				answer=1;
			}
		else if (guess==output) 
			{
				answer=2;
			}
		switch (answer)
		{
			case 0:
				cout << "Lower\n";
				high = guess;
				break;
			case 1:
				cout << "Higher\n";
				low = guess;
				break;
			case 2:
				correct = 1;
				cout << "I worked out that the answer is " << output << ".  It took me " << attempts << " guesses to work it out!.";
				break;
			default:
				break;
		}
	}
}	



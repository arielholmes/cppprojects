#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int comp (int valueA, int valueB) //returns 1 if A is larger than B, returns  2 if B is larger than A, returns 0 if A is exactly B, returns 3 if error
{
int status;
if (valueA>valueB) 
	{
		status=1;
		return status;
	}
else if (valueA<=valueB) 
	{
		status=0;
		return status;
	}
else
	{
		cout << "comp function error\n";
		status==3;
	}
}

int reorder (int place_number, int card1, int card2, int card3, int card4, int card5)  //determines card value compared to other drawn cards then returns that card if it s place number matches the request.
{
	if (card1  
}


main ()
{
	int card1 = reorder (0,1,1,1,1,2);
	int card2 = reorder (1,1,1,1,1,2);
	int card3 = reorder (2,1,1,1,1,2);
	int card4 = reorder (3,1,1,1,1,2);
	int card5 = reorder (4,1,1,1,1,2);
	cout << card1 << "\t" << card2 << "\t" << card3 << "\t" << card4 << "\t" << card5;
	
}
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;


int comp (int valueA, int valueB) //returns 1 if A is larger than B, returns  2 if B is larger than A, returns 0 if A is exactly B, returns 3 if error
{
int status;
if (valueA == valueB) status=0;
else if (valueA>valueB) status=1;
else if (valueA<valueB) status=2;
else
	{
		cout << "comp function error\n";
		status=3;
	}
return status;
}

main ()
{
	int var = comp (2,2);
	cout << var;
}
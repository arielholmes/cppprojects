#include <iostream>

using namespace std;

/******************************************************************************
* Function:         POW
* Description:      Returns A to the power of B (A^B)
* Where:
* Return:           
* Error:            
*****************************************************************************/
POW(int a, int b)
{
	if ( b == 0 ) 
	{
		return 1;	
	}		
	return a*POW(a, b-1);
}

/******************************************************************************
* Function:         int main
* Description:      
* Where:
* Return:           
* Error:            
*****************************************************************************/
int main()
{
	int a,b;
			cout << "Enter base (or 0 to exit): ";
			cin >> a;
	while (a!=0)
		{
			cout << "Enter power: ";
			cin >> b;
			cout << a << "^" << b << " is " << POW(a,b) << "\n";
			cout << "Enter base (or 0 to exit): ";
			cin >> a;
		}
}


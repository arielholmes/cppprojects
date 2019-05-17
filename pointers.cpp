#include <iostream>

using namespace std;

int main()
{
	int x,y,z = 0;
	int* p_x = & x;
	int* a = 0;
	int** p_p_x = & p_x;
	int** b = 0;
	while (z != 6)
	{
		cout << "\nx\t" << x;
		cout << "\np_x\t" << p_x;
		cout << "\np_p_x\t" << p_p_x;
		cout << "\n*p_x\t" << *p_x;
		cout << "\n**p_p_x\t" << **p_p_x;
		cout << "\n\nChoose variable to edit:\n\t(1).\tx\n\t(2).\tp_x\n\t(3).\tp_p_x\n\t(4).\t*p_x\n\t(5).\t**p_x_x\n\nOr (6) to exit.\n";
		cin >> z;
		cout << "Enter new value to enter: ";
		cin >> y;
		switch (y)
		{
			case 0:
				a = 0;
				b = 0;
				break;
				
			case 1:
				a = 1;
				b = 1;
				break;
			case 2:
				a = 2;
				b = 2;
				break;
			case 3:
				a = 3;
				b = 3;
				break;
			case 4:
				a = 4;
				b = 4;
				break;
			case 5:
				a = 5;
				b = 5;
				break;
			case 6:
				a = 6;
				b = 6;
				break;
			case 7:
				a = 7;
				b = 7;
				break;
			case 8:
				a = 8;
				b = 8;
				break;
			case 9:
				a = 9;
				b = 9;
				break;
			default:
				cout << "Error at ab conversion";
				break;
		}
		switch (z)
			{
			 case 1:
			
			 	x = y;
				break;
			

			 case 2:
		
			 	p_x = a;
				break;
	

			 case 3:

			 	p_p_x = b;
				break;


			 case 4:

			 	*p_x = y;
				break;


			 case 5:

			 	**p_p_x = y;
				break;

			default:

				cout << "Error at y input";
				break;
			}
	}
}


#include <iostream>

using namespace std;


/******************************************************************************
* Function:         createPuzzle 
* Description:      creates a 2d array with pointerz and fills first pole
/
*****************************************************************************/
int createPuzzle(int height, int poles)
{
	int **p_p_array;
	p_p_array = new int*[height];
	for (int i = 0; i < height; i++)
	{
		p_p_array[i] = new int[poles];
	}
	for (int i = 0; i <height; i++)
	{
		cout << "\n";
		for (int j = 0; j <poles; j++)
		{
			if (j == 0)
			{
				p_p_array[i][j] = (i+1);
			}
			else if (j > 0)
			{
				p_p_array[i][j] = 0;
			}
			cout << p_p_array[i][j] << "\t";
		}
	}
	
	int solved = 0;
	int finalRow [height];
	while (solved == 0)
		{
/*Find highest free piece not in correct position*/
	int moveMax = height;
	for (int m = 0; m  < height; ++m ) {
		if (p_p_array [height-1-m][poles] == (height - m)) --moveMax;
		else m = height;
	}
	cout << "\nHighest non solved number is: " << moveMax; //debug REMOVE

//get top level values, pole with highest to move and free slots to move and assign to array
	int tops[poles];
	int slots[poles];
	int bases[poles];
	cout << "\nTop size/base size/number of free slots: ";
	for (int k = 0; k < poles; ++k) 
	{
		int max = height;
		int base = 0;
		int free = 0;
		for (int l = 0; l < height; l++) 
		{
			if (p_p_array [l][k] < max)	{
				max = p_p_array[l][k];
				
			}
			if (p_p_array[l][k]== 0) {
				free++;
			}
			if (p_p_array[l][k] > base) {
				base = p_p_array[l][k];
			}

		}
		cout << max << "/" << base << "/" << free << " "; //Debug REMOVE
		slots[k] = free;
		tops[k]= max;
		bases[k] = base;
	}
/*Solve the order to move the remaing pieces using recursion*/
			if (p_p_array [0][poles-1]!= 1) 
			{
				int from, to;
				cout << "\nPole to move from? ";
				cin >> from;
				cout << "Pole to move to? ";
				cin >> to;
				int move = 0;
				int down = 0;
				while (move == 0)
				{
					if (p_p_array[down][from-1] != 0) 
						{
							move = p_p_array[down][from-1];
							p_p_array[down][from-1] = 0;
						}
					else if ( p_p_array[down][from-1] == 0 && down < height) down = down + 1;
				       	else 
					{
						cout << "Empty row!";
						move = -1;	
					}
					
				}
				cout << move << " to move\n"; //debug REMOVE
				int up = 1;
				while (move != 0)
				{
					if (p_p_array[height-up][to-1] != 0) up = up + 1;
					if (up>1){
						cout << "piece below is " << p_p_array[height-up+1][to-1] << "\n";
						if (p_p_array[height-up+1][to-1]<move){
						cout <<  "illeagal move!\n";
						p_p_array[down][from-1] = move;
						
						}
					else {
						p_p_array[height-up][to-1] = move;
						}
					}
					else {p_p_array[height-up][to-1] = move;
					}
					move = 0;

					}


					
				}
			


		for (int i = 0; i <height; i++)
		{
			cout << "\n";
			for (int j = 0; j <poles; j++)
			{
				cout << p_p_array[i][j] << "\t";
			}
		}
// Provinding the rule of no higher numbers on lowers is used, the only way the top spot of the final row can be not 0 is if the problem is solved.//
		if (p_p_array [0] [poles-1]== 1) 
		{
		solved = 1;
		}
		}		

	for (int i = 0; i <height; i++)
		{
		delete [] p_p_array[i];
		}
	delete [] p_p_array;
}

/******************************************************************************
* Function:         int main
* Description:      get number of discs and poles - start solving with function. 
*****************************************************************************/
int main()
{
	int a,b;
			cout << "Enter tower height (or 0 to exit): ";
			//cin >> a; placeholder below to REMOVE
			a = 5;
	while (a!=0)
		{
			cout << "Enter number of poles (cannot be less than 3): ";
			//cin >> b; placeholder below to REMOVE
			b = 3;	
			createPuzzle (a,b);
			cout << "\nEnter tower height (or 0 to exit): ";
			cin >> a;
		}
}

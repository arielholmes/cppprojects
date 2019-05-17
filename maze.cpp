#include <iostream>

using namespace std;

int randRange (int low, int high)  //random integer generator
{
	return rand() % ( high - low +1 ) + low;
}


int print_symbol(int o)
{
			switch (o)
			{
			case 0: cout << "#";
				break;
			case 1: cout << " ";
				break;
			}	
}

int main()
{
	int height, width, rand;
	cout << "How high is the maze? (or 0 to exit): ";
	cin >> height;
	while (height!=0)
	{
		cout << "How wide is the maze? ";
		cin >> width;
		int **p_p_board;
		p_p_board = new int*[height];
		for (int i = 0; i < height; i++)
		{
			p_p_board[i] = new int[width];
		}
		for (int i = 0; i <height; i++)
		{
			for (int j = 0; j <width; j++)
			{
				rand = randRange(0,1);
				p_p_board[i][j] = rand;
			}
		}
		
		for (int i = 0; i <width; i++)
		{
			p_p_board[0][i] = 0;
			p_p_board[height-1][i]= 0;
		}

		for (int i = 0; i <height; i++)
		{
			p_p_board[i][0] = 0;
			p_p_board[i][width-1]= 0;
		}

			p_p_board[1][randRange(1,(width-1))]= 1;
for (int i = 0; i <height; i++)
		{
			for (int j = 0; j <width; j++)
			{
				rand = 	p_p_board[i][j];
				print_symbol(rand);
			}
			cout << "\n";
		}


		for (int i = 0; i <height; i++)
			{
			delete [] p_p_board[i];
			}
		delete [] p_p_board;
		cout << "How high is the maze? (or 0 to exit): ";
		cin >> height;
	}
}


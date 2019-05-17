#include <iostream>

using namespace std;
int print_symbol(int o)
{
			switch (o)
			{
			case 0: cout << "_";
				break;
			case 1: cout << "+";
				break;
			case 2: cout << "X";
				break;
			}	
}

int main()
{
	int connect, column, line,turn, player =1;
	cout << "How many columns (or 0 to exit): ";
	cin >> column;
	while (column!=0)
	{
		cout << "How many lines? ";
		cin >> line;
		cout << "\nHow many in-a-row to win? ";
		cin >> connect;

		int **p_p_board;
		p_p_board = new int*[column];
		for (int i = 0; i < column; i++)
		{
			p_p_board[i] = new int[line];
		}
		for (int i = 0; i <column; i++)
		{
			for (int j = 0; j <line; j++)
			{
				p_p_board[i][j] = 0;
			}
		}
		int win_status = 0;
		while (win_status < 1)
		{
		turn++;
		if (turn % 2 == 0) player = 1;
		else player = 2;
			for (int i = 0; i <column; i++)
			{

				for (int j = 0; j <line; j++)
				{
					int o = p_p_board[i][j];
					print_symbol(o);
					cout << "\t";
				}
				cout << "\n";
			}
		
			win_status = 1;
		}

		cout << "How many columns (or 0 to exit): ";
		cin >> column;
		for (int i = 0; i <column; i++)
			{
			delete [] p_p_board[i];
			}
		delete [] p_p_board;
	}
}


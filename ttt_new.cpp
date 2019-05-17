#include <iostream>

using namespace std;


int print(int board)
{
	if (board == -1) cout << "[O]";
	else if (board == -10) cout << "[X]";
	else cout << board ;
}
	
int compare (int a, int b, int c, int d)
{
	if (a==b && b==c && c==d) return 1;
	else return 0;
}

main ()
{
	int gameStatus = 0;
	int turn = 0;
	int player, move, size;
	cout << "What is the board size?";
	cin >> size;
	cout << "\n"; 
	int board [size] [size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size ; j++)
		{
			board [i][j] = ((i*size) + (j+1));
		}
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size ; j++)
		{
			cout << "\t";
			print(board [i][j]);
			if (j == size-1) cout << "\n";
		}
	}
	
	while  (gameStatus == 0)
	{
		int moveCheck = 0;
		turn++;
		if (turn%2 == 1) player = -1;
		else if (turn%2 == 0) player = -10;
		print(player);
		cout << " to play: (Select 1-9):  " ;
		while (moveCheck == 0)
		{
			cin >> move;
			move--;
			if (board [move/size] [move%size] < 0) cout << "already taken! Move again\n";
			else moveCheck = 1;
		}
		board [move/size] [move%size]=player;
		cout << "\n";
		for (int i = 0; i < size; i++)
			{
			for (int j = 0; j < size ; j++)
				{
					cout << "\t";
					print(board [i][j]);
					if (j == size-1) cout << "\n";
				}
			}	
		
		int fullRow = 0;
		for (int p = 0; p < size; p++)
		{
			int x,y = 0;
			for (int q = 0; q < size; q++)
			{
			}
			if x + y ++fullRow; 
		}
		if (fullrow ==0) gamestatus == -1; 
		for (int n = 0; n < size; n++)
		{
			for (int m = 0; m <= (size-4); m++)
			{
				if (compare (board[n][m], board[n][m+1],board[n][m+2], board [n] [m+3])==1) gameStatus==1;
				else if (compare (board[m][n], board[m+1][n],board[m+2][n], board [m+3] [n])==1) gameStatus==1;
				else if (compare (board[n][m], board[n+1][m+1],board[n+2][m+2], board [n+3] [m+3])==1) gameStatus==1;
				else if (compare (board[n][m+3], board[n+1][m+2],board[n+2][m+1], board [n+3] [m])==1) gameStatus==1;
			}
		}
	}
	if (gameStatus >= 1) 
		{
		cout << "Player ";
		print(player); 
		cout << " wins!";
		}
	else if (gameStatus == -1) cout << "No win possible. Ending.";
}	
		
		
		

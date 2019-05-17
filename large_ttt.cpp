#include <iostream>

using namespace std;


int print(int board)
{
	if (board == -1) cout << "O";
	else if (board == -10) cout << "X";
	else cout << board ;
}
	
int displayBoard (int board[][9])
{
	cout << "\n";
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 ; j++)
		{
			cout << "\t";
			print(board [i][j]);
			if (j == (9-1)) cout << "\n";
		}
	}
}

int compare (int a, int b, int c, int d)
{
	if (a==b && b==c && c==d) return 1;
	else return 0;
}

int winCheck (int board [][9])
{
	int gameStatus=0;
	for (int n = 0; n < 9; n++)
		{
			for (int m = 0; m < (9-4); m++)
			{
				if (compare (board[n][m], board[n][m+1],board[n][m+2], board [n] [m+3])!=0) gameStatus++;
				else if (compare (board[m][n], board[m+1][n],board[m+2][n], board [m+3] [n])!=0) gameStatus++;
				else if (compare (board[n+m][n], board[n+1+m][n+1],board[n+2+m][n+2], board [n+m+3] [n+3])!=0) gameStatus++;
				else if (compare (board[n][n+m], board[n+1][n+1+m],board[n+2][n+2+m], board [n+3] [n+3+m])!=0) gameStatus++;
				else if (compare (board[n+m][n-3], board[n+1+m][n-2],board[n+2+m][n-1], board [n+m+3] [n])!=0) gameStatus++;
				else if (compare (board[n][n+m+3], board[n+1][n+m+2],board[n+2][n+m+1], board [n+3] [n])!=0) gameStatus++;
				}
		}
		if (gameStatus == 0) return 0;
		else return 1;
}

int fullCheck (int board [][9])
{
	
	int gameStatus=0;
	for (int a = 0; a < 2; a++)
	{
		for (int i = 0; i < 9; i++)
		{
			int sum = 0;
			for (int j = 0; j < 9 ; j++)
				{	
					if (a == 0) sum = sum + board [i] [j];
					else if (a == 1) sum = sum + board [j][i];
				}
						
					
			if (sum > (9 *5) || sum % 10 > 9/2) gameStatus++;
		}
	}
	for (int a = 0; a < 2; a++)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int m = 0; m < (9 - 4); m++)
			{			
				int sum = 0;
				for (int j = 0; j < 9 ; j++)
					{	
					if (a == 0) 
						{
						while (i+j+m < 9 -4) sum = sum + board [i+j+m] [j];
						}
					else if (a == 1) sum = sum + board [j][i];
						
					}
						
			
			if (sum > (9 *5) || sum % 10 > 9/2) gameStatus++;
			}
		}
	}
	
		if (gameStatus >= 0) return 0;
		else return -11;
}


main ()
{
	int gameStatus = 0;
	int turn = 0;
	int player, move, size;
	cout << "How big is the board? ";
	cin >> size;
	cout << "\n";
	int board [9] [9];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size ; j++)
		{
			board [i][j] = ((i*size) + (j+1));
		}
	}
	displayBoard (board);
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
			if (board [move/3] [move%3] < 0) cout << "already taken! Move again\n";
			else moveCheck = 1;
		}
		board [move/3] [move%3]=player;
		displayBoard(board);
		gameStatus = winCheck (board);
		if (gameStatus == 0) gameStatus = fullCheck (board);
	}
	if (gameStatus >= 1) 
		{
		cout << "Player ";
		print(player); 
		cout << " wins!";
		}
	else if (gameStatus == -1) cout << "No win possible. Ending.";
}	
		
		
		

#include <iostream>

using namespace std;


int print(int board)
{
	if (board == -1) cout << "O";
	else if (board == -10) cout << "X";
	else cout << board ;
}
	
int displayBoard (int board[][3])
{
	cout << "\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 ; j++)
		{
			cout << "\t";
			print(board [i][j]);
			if (j == 2) cout << "\n";
		}
	}
}

int compare (int a, int b, int c)
{
	if (a==b && b==c) return 1;
	else return 0;
}

int winCheck (int board [][3])
{
	int gameStatus=0;
	for (int n = 0; n < 3; n++)
		{
			if (compare (board[n][0], board[n][1],board[n][2])!=0) ++gameStatus;
			if (compare (board[0][n], board[1][n],board[2][n])!=0) ++gameStatus;
		}
		if (compare (board[0][0], board[1][1],board[2][2])!=0) ++gameStatus;
		if (compare (board[0][2], board[1][1],board[2][0])!=0) ++gameStatus;	
		if (gameStatus == 0) return 0;
		else return 1;
}

int fullCheck (int board [][3],int status)
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 ; j++)
		{
			sum = sum + board [i][j];
		}
	}
	if (sum == -54 || sum == -45) return -1;
	else return status;
}


main ()
{
	int gameStatus = 0;
	int turn = 0;
	int player, move;
	int board [3] [3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 ; j++)
		{
			board [i][j] = ((i*3) + (j+1));
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
		gameStatus = fullCheck (board, gameStatus);
		}
	if (gameStatus >= 1) 
		{
		cout << "Player ";
		print(player); 
		cout << " wins!";
		}
	else if (gameStatus == -1) cout << "No win possible. Ending.";
}	
		
		
		

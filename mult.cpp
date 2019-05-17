#include <iostream>

using namespace std;

int two_d_mult (int length, int width)
{
	int **p_p_board;
	p_p_board = new int*[length];
	for (int i = 0; i < length; i++)
	{
		p_p_board[i] = new int[width];
	}
	for (int i = 0; i <length; i++)
	{
		cout << "\n";
		for (int j = 0; j <width; j++)
		{
			p_p_board[i][j] = (i+1)*(j+1);
			cout << p_p_board[i][j] << "\t";
		}
	}
	
	for (int i = 0; i <length; i++)
		{
		delete [] p_p_board[i];
		}
	delete [] p_p_board;
}

int main()
{
	int length, width =1;
	cout << "Enter length (or 0 to exit): ";
	cin >> length;
	while (length!=0)
	{
		cout << "Enter width: ";
		cin >> width;
		two_d_mult (length, width);
		cout << "\nEnter length: ";
		cin >> length;
	}
}


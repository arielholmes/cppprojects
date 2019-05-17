#include <iostream>

using namespace std;

int three_d_mult (int length, int width, int height)
{
	int ***p_p_p_board;
	p_p_p_board = new int**[length];
	for (int i = 0; i < length; i++)
	{
		p_p_p_board[i] = new int*[width];
	}
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j <width; j++)
		{
			p_p_p_board[i][j] = new int[height];
		}
	}
	for (int i = 0; i <length; i++)
	{
		cout << "\n\nLayer " << (i+1);
		for (int j = 0; j <width; j++)
		{
			cout << "\n";
			for (int k = 0; k<height; k++)
			{
				p_p_p_board[i][j][k] = (i+1)*(j+1)*(k+1);
				cout << p_p_p_board[i][j][k] << "\t";
			}
		}
	}
	
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j <width; j++)
		{
			delete [] p_p_p_board[i][j];
		}
	}
	for (int i = 0; i <length; i++)
		{
		delete [] p_p_p_board[i];
		}
	delete [] p_p_p_board;
}

int main()
{
	int length, width, height =1;
	cout << "Enter length (or 0 to exit): ";
	cin >> length;
	while (length!=0)
	{
		cout << "Enter width: ";
		cin >> width;
		cout << "Enter height: ";
		cin >> height;
		three_d_mult (length, width, height);
		cout << "\nEnter length: ";
		cin >> length;
	}
}


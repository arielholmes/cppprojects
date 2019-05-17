#include <iostream>
#include <string>

using namespace std;
int game (string A1, string A2, string A3, string B1, string B2, string B3, string C1, string C2, string C3, string sym)
{
	int status =0;
	if (
		(A1==A2&&A2==A3&&A1==sym) or
		(B1==B2&&B2==B3&&B1==sym) or
		(C1==C2&&C2==C3&&C1==sym) or
		(A1==B1&&B1==C1&&B1==sym) or
		(A2==B2&&B2==C2&&B2==sym) or
		(A3==B3&&B3==C3&&B3==sym) or
		(A1==B2&&B2==C3&&A1==sym) or
		(A3==B2&&B2==C1&&C1==sym)
	)
	{
		status = 1;
		return status;
	}
	else
	{
		status = 0;
		return status;
	}
}
	
int main()
{
	string boardA1 = "(1)"; 
	string boardA2 = "(2)";
	string boardA3 = "(3)";
	string boardB1 = "(4)";
	string boardB2 = "(5)";
	string boardB3 = "(6)";
	string boardC1 = "(7)";
	string boardC2 = "(8)";
	string boardC3 = "(9)";
	int move = 0;
	string symbol = "X";
	for (int turn = 1; turn < 10; turn++)
	{
		cout << boardA1 << "\t"<< boardA2 << "\t"<< boardA3<<"\n";
		cout << boardB1 << "\t" <<boardB2 << "\t"<< boardB3<<"\n";
		cout << boardC1 << "\t"<< boardC2 << "\t"<< boardC3<<"\n\n";
		if ((turn==1)||(turn==3)||(turn==5)||(turn==7)||(turn==9)) {symbol="X";}
		else {symbol="0";}
		cout << "Turn number " << turn << ". " << symbol << " to move.\n" ;
		cout << "Enter your move: \n";
		cin >> move;
		switch (move)
		{
			case 1:
				if (boardA1=="(1)"){boardA1=symbol;}
				break;
			case 2:
				if (boardA2=="(2)"){boardA2=symbol;}
				break;
			case 3:
				if (boardA3 == "(3)"){boardA3=symbol;}
				break;
			case 4:
				if (boardB1 == "(4)"){boardB1=symbol;}
				break;
			case 5:
				if (boardB2 == "(5)"){boardB2=symbol;}
				break;
			case 6:
				if (boardB3 == "(6)"){boardB3=symbol;}
				break;
			case 7:
				if (boardC1 == "(7)"){boardC1=symbol;}
				break;
			case 8:
				if (boardC2 == "(8)"){boardC2=symbol;}
				break;
			case 9:
				if (boardC3 == "(9)"){boardC3=symbol;}
				break;
			default:
				cout << "Illeagal move.";
				break;
		}
		
		if (game (boardA1, boardA2, boardA3, boardB1, boardB2, boardB3, boardC1, boardC2, boardC3, symbol)==1)
		{
		cout << symbol << " wins!";
		break;
		}
		
	}
}
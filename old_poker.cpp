#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int randRange (int low, int high)  //random integer generator
{
	return rand() % ( high - low +1 ) + low;
}

int suit (int card) //get suit number from card number
{
	int suit_out = 0;
	if (card > 0 && card  <=13) {suit_out = 1;}
	else if (card > 13 && card  <=26) {suit_out = 2;}
	else if (card > 26 && card  <=39) {suit_out = 3;}
	else if (card >39) {suit_out = 4;}
	return suit_out;
}

int face (int card_number, int suit) //get card value from card number, requres suit function output
{
	suit--;
	suit = 13*suit;
	int face_out = card_number-suit;
	return face_out;
}
int print_card (int face, int suit)  //Print card name in human readable form
{
	switch (face)
	{
		case 1: cout << "2";
			break;
		case 2: cout << "3";
			break;
		case 3: cout << "4";
			break;
		case 4: cout << "5";
			break;
		case 5: cout << "6";
			break;
		case 6: cout << "7";
			break;
		case 7: cout << "8";
			break;
		case 8: cout << "9";
			break;
		case 9: cout << "10";
			break;
		case 10: cout << "J";
			break;
		case 11: cout << "Q";
			break;
		case 12: cout << "K";
			break;
		case 13: cout << "A";
			break;
		default: cout << "face error";
			break;
	}
	switch (suit)
	{
		case 1: cout << "H";
			break;
		case 2: cout << "S";
			break;
		case 3: cout << "D";
			break;
		case 4: cout << "C";
			break;
		default: cout << "suit error";
			break;
	}
}


int deal_card ()   //deal new card
{
	int card_number = randRange (1, 52);
	return card_number;
}	

int print_card (int cardno)  // Resend human readable card form
{
	int suit_out = suit (cardno);
	int face_out = face (cardno, suit_out);
	print_card (face_out, suit_out);
	cout << "\t";
}

int keep_card (int card_no)  // Redeal card based on input
{
	string keep;
	cout << "\n Keep "; 
	print_card (card_no);
	cout << "? (y/n) \n";
	cin >> keep;
	if (keep == "n") 
		{
			card_no = randRange (1, 52);
			return card_no;
		}
	else {return card_no;}
}	

int new_card_check (int input_card, int check1, int check2, int check3, int check4, int check5, int check6, int check7, int check8, int check9)
{
	for (int cycle=1; cycle <=9; cycle++)
		switch (cycle)
	{
		case 1: if (input_card == check1)
			{
				cycle=10;
				return 1;
				break;
			}
			else break;
		case 2: if (input_card == check2)
			{
				cycle=10;
				return 1;
				break;
			}
			else break;
		case 3: if (input_card == check3)
			{
				cycle=10;
				return 1;
				break;
			}
			else break;
		case 4: if (input_card == check4)
			{
				cycle=10;
				return 1;
				break;
			}
			else break;
		case 5: if (input_card == check5)
			{
				cycle=10;
				return 1;
				break;
			}
			else break;
		case 6: if (input_card == check6)
			{
				cycle=10;
				return 1;
				break;
			}
			else break;
		case 7: if (input_card == check7)
			{
				cycle=10;
				return 1;
				break;
			}
			else break;
		case 8: if (input_card == check8)
			{
				cycle=10;
				return 1;
				break;
			}
			else break;
		case 9: if (input_card == check9)
			{
				cycle=10;
				return 1;
				break;
			}
			else 
			return 0;
			break;
	
	}
}
int main ()
{
	srand(  time( NULL ) );
	int card1 = deal_card();
	int card2 = deal_card();
	int card3 = deal_card();
	int card4 = deal_card();
	int card5 = deal_card();
	card1 = keep_card (card1);
	card2 = keep_card (card2);
	card3 = keep_card (card3);
	card4 = keep_card (card4);
	card5 = keep_card (card5);
	print_card (card1);
	print_card (card2);
	print_card (card3);
	print_card (card4);
	print_card (card5);
	}
	/* for (check = 1, check <= 10, ++check)
	{
	switch (check):
		Case 1:
			if royal_flush_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 2:
			if straight_flush_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 3:
			if four_kind_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 4:
			if full_house_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 5:
			if flush_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 6:
			if straight_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 7:
			if tripple_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 8:
			if two_pair_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 9:
			if pair_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Case 10
			Case 2:
			if straight_flush_check (card1, card2, card3, card4, card5) =1 
			{
				check = 10;
				break;
			}
			else break;
		Default:
			cout << "Error at hand check.\n";
			break;
		}
	}    
	
} */
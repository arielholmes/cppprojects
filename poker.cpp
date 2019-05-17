#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int randRange (int low, int high)  //random integer generator
{
	return rand() % ( high - low +1 ) + low;
}

int suit (int card) //get suit number from card number STRIP  FACE VALUE
{
	int suit_out = 0;
	if (card > 0 && card  <=13) {suit_out = 1;} //suit 1 is HEARTS
	else if (card > 13 && card  <=26) {suit_out = 2;} //suit 2 is SPADES
	else if (card > 26 && card  <=39) {suit_out = 3;} //suit 3 is DIAMONDS
	else if (card >39 && card <=52) {suit_out = 4;} //suit 4 is CLUBS
	else  cout << "suit error  card no " << card ;
	return suit_out;
}

int face (int card_number, int suit) //get card value from card number, DEPENDS SUIT function output, STRIPS SUIT
{
	suit--;
	suit = 13*suit;
	int face_out = card_number-suit;
	return face_out;
}

int print_face (int face)  //Print face value in human readable form DOES NOT RETURN A VALUE
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
}
	
int print_suit (int suit) //print suit in human readable form - no return
{
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
		default:
			break;
	}
}

int deal_card (int card1, int card2, int card3, int card4, int card5, int redeal1, int redeal2, int redeal3, int redeal4) //deal card, make sure it is a new card   
{	
	int card = ( randRange (1,52));
	if (card == card1 || card == card2 || card == card3 || card == card4 || card == card5 || card == redeal1 || card == redeal2 || card == redeal3 || card == redeal4) 
	{
		card = (randRange (1,52));
		if (card == card1 || card == card2 || card == card3 || card == card4 || card == card5 || card == redeal1 || card == redeal2 || card == redeal3 || card == redeal4) 
		{
			card = (randRange (1,52));
			return card;
		}
		else return card;
	}
	else 
	{
		return card;
	}
}

int card_convert (int cardno)  // macro to print card from card_number
{
	int suit_out = suit (cardno);
	int face_out = face (cardno, suit_out);
	print_face (face_out);
	print_suit (suit_out);
	cout << "\t";
}

int keep_card (int card_no, int card1, int card2, int card3, int card4, int redeal1, int redeal2, int redeal3, int redeal4)  // Returns final card no (new card or kept card)
{
	string keep;
	cout << "\n Keep "; 
	card_convert (card_no);
	cout << "? (y/n) \n";
	cin >> keep;
	if (keep == "n") 
		{
			card_no = deal_card ( card_no, card1, card2, card3, card4, redeal1, redeal2, redeal3, redeal4);
			return card_no;
		}
	else {return card_no;}
}

int comp (int valueA, int valueB) //returns 1 if A is larger than B, returns 0 if A is exactly B, returns 3 if error
{
int status;
if (valueA>valueB) 
	{
		status=1;
		return status;
	}
else if (valueA<=valueB) 
	{
		status=0;
		return status;
	}
else
	{
		cout << "comp function error\n";
		status==3;
	}
}

int comp2 (int valueA, int valueB) //returns 1 if is not equal to B returns 0 if A is exactly B, returns 3 if error
{
int status;
if (valueA!=valueB) 
	{
		status=1;
		return status;
	}
else if (valueA==valueB) 
	{
		status=0;
		return status;
	}
else
	{
		cout << "comp function error\n";
		status==3;
	}
}

int reorder (int place_number, int card1, int card2, int card3, int card4, int card5)  //determines card value compared to other drawn cards then returns that card if it s place number matches the request.
{
	int suit1 = suit(card1);  //get suits
	int suit2 = suit(card2);
	int suit3 = suit(card3);
	int suit4 = suit(card4);
	int suit5 = suit(card5);
	int face1 = face (card1, suit1);  //get face values
	int face2 = face (card2, suit2);
	int face3 = face (card3, suit3);
	int face4 = face (card4, suit4);
	int face5 = face (card5, suit5);
	int rank1 = face1 * 1000 + card1;  //  uses card number to prevent errors from matching face values
	int rank2 = face2 * 1000 + card2;
	int rank3 = face3 * 1000 + card3;
	int rank4 = face4 * 1000 + card4;
	int rank5 = face5 * 1000 + card5;
	if (place_number == ((comp (rank1, rank2)) + (comp (rank1, rank3))+ (comp (rank1, rank4))+(comp (rank1, rank5)))) return card1;  
	else if (place_number == ((comp (rank2, rank1)) + (comp (rank2, rank3))+ (comp (rank2, rank4))+(comp (rank2, rank5)))) return card2;  
	else if (place_number == ((comp (rank3, rank2)) + (comp (rank3, rank1))+ (comp (rank3, rank4))+(comp (rank3, rank5)))) return card3;
	else if (place_number == ((comp (rank4, rank2)) + (comp (rank4, rank3))+ (comp (rank4, rank1))+(comp (rank4, rank5)))) return card4;
	else if (place_number == ((comp (rank5, rank2)) + (comp (rank5, rank3))+ (comp (rank5, rank4))+(comp (rank5, rank1)))) return card5;
	else cout << "reorder error\n";
}

int suit_match (int suit1, int suit2, int suit3, int suit4, int suit5) //assess for all suit match
{
	if (suit1 == suit2 && suit2 == suit3 && suit3 == suit4 && suit4 == suit5) return 1; 
	else return 0;
}

int straight_match (int face1, int face2, int face3, int face4, int face5) //assess for straight
{
	if ((face2 == face1 +1) && (face3 == face2 +1) && (face4 == face3 + 1) && (face5 == face4 +1)) return 1;
	else return 0;
}

int set_check (int card1, int card2, int card3, int card4,  int card5)  //return 0 for highcard, 1 for 1 pair, 2 for two pairs, 3, for triple, 4 for full house and 5 for four of a kind.
{
	int comp_check = 0 ;  //accumulator for non matching card comparisons 
	comp_check = comp_check + comp2 (card1, card2);   
	comp_check = comp_check + comp2 (card1, card3);
	comp_check = comp_check  + comp2 (card1, card4); 
	comp_check = comp_check  + comp2 (card1, card5);
	comp_check = comp_check  + comp2 (card2, card3);
	comp_check = comp_check + comp2(card2, card4);
	comp_check = comp_check + comp2 (card2, card5);
	comp_check = comp_check+ comp2(card3, card4); 
	comp_check = comp_check + comp2 (card3, card5);
	comp_check = comp_check + comp2 (card4, card5);
	switch (comp_check)
	{
		case 5:
			return 5;
			break;
		case 6:
			return 4;
			break;
		case 7:
			return 3;
			break;
		case 8:
			return 2;
			break;
		case 9:
			return 1;
			break;
		case 10:
			return 0;
			break;
		default:
			cout << "set_check error\n";
			break;
	}
}

int print_pair (int sort1, int sort2, int sort3, int sort4,  int sort5)  //return highest pair value
{
	if (sort5 == sort4) 
	{
		print_face (sort5);
	}
	else if (sort4 == sort3)	
	{
		print_face (sort4);
	}
	else if (sort3 == sort2)
		{
		print_face (sort3);
	}
	else if (sort1 == sort2)
	{
		print_face (sort1);
	}	
	else
		cout << "print pair error. ";
}

int score (int card1, int card2, int card3, int card4, int card5 )  //displays cards dealt and score, returns nothing
{
	
	int suit1 = suit(card1);  //get suits
	int suit2 = suit(card2);
	int suit3 = suit(card3);
	int suit4 = suit(card4);
	int suit5 = suit(card5);
	int face1 = face (card1, suit1);  //get face values
	int face2 = face (card2, suit2);
	int face3 = face (card3, suit3);
	int face4 = face (card4, suit4);
	int face5 = face (card5, suit5);
	
	print_face (face1); 
	print_suit (suit1);  //print dealt cards
	cout << "\t";
	print_face (face2);
	print_suit (suit2);
	cout << "\t";
	print_face (face3);
	print_suit (suit3);
	cout << "\t";
	print_face (face4);
	print_suit	(suit4);
	cout << "\t";
	print_face (face5);
	print_suit (suit5);
	cout << "\n Hand score is: ";
	
	bool flush = suit_match (suit1, suit2, suit3, suit4, suit5);
	bool straight = straight_match (face1, face2, face3, face4, face5);
	if (flush == 1 && straight ==1 && face1 == 9) cout << "Royal flush!\n"; // face1 == 9 is to check the lowest card is a 10 - indicating a royal flush
	else if (flush == 1 && straight == 1 && face1 != 9 ) 
		{
			cout << "Straight flush " ;
			print_face(face5);
			cout << " high.\n";
		}
	else if (flush == 1 && straight == 0)
		{
			cout << "Flush ";
			print_face (face5);
			cout << " high.\n";
		}
	else if (flush == 0 && straight == 1)
		{
			cout << "Straight ";
			print_face (face5);
			cout << " high.\n";
		}
	else
	{
	int match = set_check (face1, face2, face3, face4, face5);
	
	switch (match)
		{
			
			case 1:
				cout << "Pair of ";
				print_pair (face1, face2, face3, face4, face5);
				cout << "s.\n";
				break;
			case 2:
				cout << "Two pair: ";
				print_face (face4);
				cout << "s over ";
				print_face (face2);
				cout << "s\n";
				break;
			case 3:
				cout << "Triple ";
				print_pair (face1, face2, face3, face4, face5);
				cout << "s \n";
				break;
			case 4 :
				cout << "Full House: " << print_face (face3) << " triple. \n";
				break;
			case 5:
				cout << "Four of a kind: " << print_face (face3);
				cout << "s. \n";
				break;
			default:
			{
				cout << "High card ";
				print_face (face5);
				cout << "\n";
				break;
			}
		}
	}
}

main ()
{
srand(  time( NULL ) );
int cardA1 = randRange (1, 52);   //deals 5 cards without printing
int cardA2 = deal_card(cardA1,0,0,0,0,0,0,0,0);	
int cardA3 = deal_card(cardA1,cardA2,0,0,0,0,0,0,0);	
int cardA4 = deal_card(cardA1,cardA2,cardA3,0,0,0,0,0,0);	
int cardA5 = deal_card(cardA1,cardA2,cardA3,cardA4,0,0,0,0,0);	

int cardB1 = reorder (0, cardA1, cardA2, cardA3, cardA4, cardA5); // reorders cards from lowest value to highest.
int cardB2 = reorder (1, cardA1, cardA2, cardA3, cardA4, cardA5);
int cardB3 = reorder (2, cardA1, cardA2, cardA3, cardA4, cardA5);
int cardB4 = reorder (3, cardA1, cardA2, cardA3, cardA4, cardA5);
int cardB5 = reorder (4, cardA1, cardA2, cardA3, cardA4, cardA5);
	
score (cardB1, cardB2, cardB3, cardB4, cardB5);	//get hand score
	
int cardC1 = keep_card (cardB1, cardB2, cardB3, cardB4, cardB5, 0, 0 ,0 ,0);  //offer player to replace each card
int cardC2 = keep_card (cardB2, cardB1, cardB3, cardB4, cardB5, cardC1, 0 ,0 ,0);
int cardC3 = keep_card (cardB3, cardB2, cardB1, cardB4, cardB5, cardC1, cardC2 ,0 ,0);
int cardC4 = keep_card (cardB4, cardB2, cardB3, cardB1, cardB5, cardC1, cardC2 ,cardC3 ,0);
int cardC5 = keep_card (cardB5, cardB2, cardB3, cardB4, cardB1, cardC1, cardC2 ,cardC3 ,cardC4);
	
int cardD1 = reorder (0, cardC1, cardC2, cardC3, cardC4, cardC5); // reorders cards from lowest value to highest.
int cardD2 = reorder (1, cardC1, cardC2, cardC3, cardC4, cardC5);
int cardD3 = reorder (2, cardC1, cardC2, cardC3, cardC4, cardC5);
int cardD4 = reorder (3, cardC1, cardC2, cardC3, cardC4, cardC5);
int cardD5 = reorder (4, cardC1, cardC2, cardC3, cardC4, cardC5);

// debug  cout << "Card no: " << cardB1 << "\t" << cardB2 << "\t" << cardB3 << "\t" << cardB4 << "\t" << cardB5 << "\n";
	
score (cardD1, cardD2, cardD3, cardD4, cardD5);	  //final score out
}



		
	

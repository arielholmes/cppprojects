#include <iostream>
using namespace std;

int findSmallestRemainingElement (int array[], int size, int index);

void swap (int array[], int first_index, int second_index);

void sort (int array[], int size)
{
	for ( int i = 0; i < size; i++ )
	{
		int index = findSmallestRemainingElement( array, size, i );
		swap( array, i, index );
	}

}

int findSmallestRemainingElement (int array[], int size, int index)
{
	int index_of_smallest_value = index;
	for (int i = index + 1; i < size; i++)
		{
			if ( array[ i ] < array[ index_of_smallest_value ] )
			{
				index_of_smallest_value = i;
			}
		}
	return index_of_smallest_value;
}

void swap (int array[], int first_index, int second_index)
{
	int temp = array[ first_index ];
	array[ first_index ] = array[ second_index ];
	array[ second_index ] = temp;
}
void displayArray (int array[], int size)
{
	cout << "Members: ";
	for ( int i = 0; i < size; i++ )
		{
			if ( i != 0 )
				{
					cout << ", ";
				}
			cout << array[ i ];
		}
	cout << "\n";

}

int array_average (int array[], int size)
{
	int counter = 0;
	for ( int i = 0; i < size; i++ )
		{
			counter += array[i];
		}
	return (counter/50);
}

int sorttest (int array[], int members)
{
	for (int i = 0; i < (members - 1); i++)
	{
		if (((array[i+1] - array[i])) <=0) 
		{
			return 0;
			break;
		}
	}
	return 1;
}
	
main()
{
	int members;
	cout << "How many members? ";
	cin >> members;
	cout << "\n";
	int array[ members ];
	for (int i = 0; i < members; i++)
	{
		cout << "Enter value (" << i+1 << "): ";
		cin >> array[i];
		cout << "\n";
	}
	displayArray (array, members);
	cout << "Is it sorted? \n";
	int s = sorttest (array, members);
	if (s == 1) cout << "Yes.";
	if (s == 0) 
	{	
		cout << "No. I will sort now. \n";
		sort(array, members);
		displayArray (array, members);
	}
}
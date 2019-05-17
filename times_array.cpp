#include <iostream>
using namespace std;
int main ()
{
int array[ 12][ 12 ]; // Declares an array that looks like a chessboard
for ( int i = 0; i < 12; i++ )
{
for ( int j = 0; j < 12; j++ )
{
array[ i ][ j ] = (i+1) * (j+1); // Set each element to a value
}
}
cout << "Multiplication table: ";
for ( int i = 0; i < 12; i++ )
{
cout << "\n";
for ( int j = 0; j < 12; j++ )
{
cout << i+1 << " x "<< j+1 <<" = ";
cout << array[ i ][ j ];
cout << "\t";
}
}
}
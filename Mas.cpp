#include "stdafx.h"
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include<stdlib.h>
using namespace std;

void selectionSort( int [], int );

int main()
{
  const int SIZE = 10;
	const int MAXRANGE = 1000;
	int sortThisArray[ SIZE ] = {};

	srand( time( 0 ) );


	for ( int i = 0; i < SIZE; i++ )
		sortThisArray[ i ] = 1 + rand() % MAXRANGE;

	cout << "\nUnsorted array is:\n";


	for ( int j = 0; j < SIZE; j++ )
		cout << ' ' << sortThisArray[ j ] << ' ';

	selectionSort( sortThisArray, SIZE ); 

	cout << "\n\nSorted array is:\n"; 


	for ( int k = 0; k < SIZE; k++ )
		cout << ' ' << sortThisArray[ k ] << ' ';
	system("pause");
	cout << '\n' << endl;
} 
void selectionSort( int array[], int size )
{
	int temp; 
	if ( size >= 1 ) 
	{
		for ( int loop = 0; loop < size; loop++ )
		{
			if ( array[ loop ] < array[ 0 ] ) 
			{
				temp = array[ loop ];
				array[ loop ] = array[ 0 ];
				array[ 0 ] = temp;
			}
		} 

		selectionSort( &array[ 1 ], size - 1 );
	} 

}

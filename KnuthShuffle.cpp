/* Knuth Shuffle */


#include <iostream>
#include <stdlib.h>

using namespace std;

void swap( int array [] , int i , int  r , int size);

int main () {
	
	
	int rand (void) ;
	int array [] = { 1,2,3,4,5,6,7,8,9,10} ;
	int size = sizeof(array)/sizeof(array[0]);
	for ( int i=0 ; i < size ; i++ )
	{
		int r = rand() % (i + 1);
		swap ( array , i , r , size);
	}
}

void swap ( int array [] , int i , int r , int size)
{
	int temp ;
	
	temp = array[i];
	array[i] = array [r];
	array[r] = temp ;
	
	for ( int i=0 ; i < size ; i++ )
	{
		cout << array [i] << "  ";
	}
}

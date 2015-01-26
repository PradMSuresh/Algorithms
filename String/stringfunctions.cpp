#include "stringfunctions.hpp"
#include <iostream>
#include <string>

using namespace std;

bool stringFunctions::startsWith(string word , string prefix )
{
	int length = prefix.length();
	int word_length = word.length();
	
	if ( length > word_length)
		return false;
	
	for ( int i=0 ; i < length ; i++)
	{
		if( word[i] != prefix[i])
		return false;
	}
	
	return true;
}

		

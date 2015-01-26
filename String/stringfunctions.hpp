#ifndef _STRINGFUNCTIONS_HPP
#define _STRINGFUNCTIONS_HPP

#include <string>
using namespace std;

class stringFunctions {
	
	public:
	
	string startsWith(string , string);
	string endsWith(string , string);
	string trim (string);
	string substring(string , int , int);
	string substring(string , int);
	string capitalize(string);
	int score(string);
	string acronym(string);
	string removeCharacters(string);
	string removeCharactersInPlace(string);
	string removeDoubledCharacters(string);
	string replaceAll(string , char , char);
	string replaceAll(string , string , string);
	string isSentencePalindrome(string);
	string createRegularPlural(string);
	string createOrdinalForm(int);
	string addCommas(string);
	string encodeCeaserCipher(string , int );
	int dnaMatching(string , string);
};

#endif

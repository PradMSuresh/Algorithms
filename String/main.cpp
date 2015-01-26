#include "stringfunctions.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	stringFunctions sf;
	string word = "amen";
	string prefix = "amq"; 
	cout << sf.startsWith(word , prefix);
	cout << endl;
}


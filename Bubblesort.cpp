#include <iostream>
#include <vector>

using namespace std ;

void fillVector(vector<int>& );
void printVector(vector <int>&);
void bubblesort (vector <int>&);

int main() {
	
	vector<int> myVector ;
	
	fillVector(myVector);
	printVector(myVector);
	cout << endl;

	bubblesort(myVector);
	printVector(myVector);
}

void fillVector( vector <int>& myVector ) {
	
	int input;
	
	cout << "Enter the values of the list ( Type -1 to indicate the end of the list of numbers)" ;
	cout <<endl ;
	cin >> input ;
	
	while (input != -1)
	{
		myVector.push_back(input);
		cin >> input ;
	}
}

void printVector( vector <int>& myVector ) {
	
	for (unsigned int i =0 ; i < myVector.size() ; i++)
	{
		cout << myVector[i] << "   " ;
	}
}

void bubblesort ( vector <int>& myVector ) {
	
	for ( unsigned int i= 0 ; i <= myVector.size() -2 ; i++ )
	{
		for ( unsigned int j = i+1 ; j < myVector.size(); j++ )
		{
			int temp ;
			
			if ( myVector [i] > myVector [j] )
			{
				temp = myVector[i];
				myVector[i] = myVector[j];
				myVector[j] = temp;
			}
		}
	}
}

				  

#include <iostream>
#include <vector>

using namespace std;

void fillVector ( vector <int>& );
void mergeSort ( vector <int>& , int , int );
void merge ( vector <int>& , int , int , int );
void printVector ( vector <int>& );

int main() {
	
	vector <int> myVector ;
	fillVector(myVector);
	int size = myVector.size();
	int high = size - 1;
	int low = 0;
	mergeSort(myVector , low , high );
	cout << "Final Vector:" ;
	printVector(myVector);
	
	
	
}  

void fillVector ( vector <int>& myVector )
{
	int input;
	cout << "Enter the elements of the vector (Use -1 to indicate the end of the list) : " ;
	cout <<endl;
	cin  >> input ;
	
	while(input != -1) {
		myVector.push_back(input);
		cin >> input ;
	}
}

void printVector( vector <int>& myVector )
{
	for (unsigned int i=0 ; i < myVector.size() ; i++ )
	{
		cout << myVector[i] << "  " ;
	}
}

void mergeSort ( vector <int>& myVector , int low , int high ) {
	if (low < high ) {
		int middle = (low + high)/2 ;
		cout << "Calculated middle :" << middle << endl ;
		mergeSort( myVector , low , middle );
		cout << "First Merge Sort" << endl;
		mergeSort( myVector, middle+1 , high );
		cout << "Second Merge Sort" <<endl;
		merge ( myVector , low , middle , high );
		cout << "Completed Merge" <<endl;
		printVector(myVector);
		cout << endl;
			}
}
	
void merge ( vector <int>& myVector, int low , int middle , int high ) {
	cout << "low:" << low << " " << "middle:" << middle << " " << "high:" << high <<endl;
	vector <int> lvector ;
	vector <int> rvector ;
	
	
	for ( int i = low ; i <=middle ; i ++)
	{
		lvector.push_back(myVector[i]);
		cout << "Left Vector :" ;
		printVector(lvector);
		cout << endl;
	}
	
	for ( int i =middle+1 ; i <= high ; i++ )
	{
		rvector.push_back(myVector[i]);
		cout << "Right Vector :" ;
		printVector(rvector);
		cout << endl;
	}
	
	unsigned int i = 0 ; unsigned int j = 0; unsigned int k = low ; int count = 0;
	while ( (i < lvector.size()) &&  ( j < rvector.size()) ) 
	{
		if ( lvector[i] <= rvector [j] )
		{
			myVector[k]=lvector[i];
			i++;
		}
		else
		{
			myVector[k] = rvector[j];
			j++;
		}
		k++;
	}
	
	while ( i < lvector.size() ) {
		myVector[k] = lvector[i];
		i++;
		k++;
	}
	
	while (j < rvector.size() ) {
		myVector[k]= rvector[j];
		j++;
		k++;
	}
	
	cout << "Count : " <<count ;
	
}
	
		


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
	
	unsigned int i = low ; unsigned int j = middle + 1 ; unsigned int k = high ;
	while ( (i < j ) &&  (j <= k) ) 
	{
		if ( myVector[i] <= myVector [j] )
		{
			j++;
		}
		else
		{
			swap(myVector[i],myVector[j]);
			i++;
		}
	}
}
	
		



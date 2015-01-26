#include <iostream>
#include <vector>

using namespace std;

void fillVector (vector <int>&);
void printVector (vector <int>&);
void mergeSort (vector <int>& , int , int );
void merge (vector <int>& , int , int , int );
void binarySearch(vector <int>& , int , int , int );

int main () {
	
	vector <int> myVector;
	int number;
	fillVector(myVector);
	int size = myVector.size();
	int high = size - 1;
	cout << "The Entered Vector : " <<endl ;
	printVector(myVector);
	cout <<endl;
	int low = 0;
	cout << endl;
	cout << "Entering mergesort " << endl ;
	mergeSort(myVector , low , high );
	cout << "Sorted Vector :" ;
	printVector(myVector);
	cout << endl; 
	cout <<"Enter the number you would like to search :" ;
	cin >> number;
	binarySearch(myVector,low , high , number);
}

void fillVector(vector<int>& myVector)
{
	int input ;
	
	cout << "Enter the numbers in the list ( Type in -1 too indicate the end of the list) : " <<endl;
	cin  >> input;
	
	while ( input != -1)
	{
		myVector.push_back(input);
		cin >> input;
	}
}

void printVector(vector <int>& myVector)
{
	for ( unsigned int i= 0 ; i < myVector.size() ; i++)
	{
		cout << myVector[i] << " "  ;
	}
}

void mergeSort ( vector <int>& myVector , int low , int high ) {
	if (low < high ) {
		int middle = (low + high)/2 ;
		//cout << "Calculated middle :" << middle << endl ;
		mergeSort( myVector , low , middle );
		//cout << "First Merge Sort" << endl;
		mergeSort( myVector, middle+1 , high );
		//cout << "Second Merge Sort" <<endl;
		merge ( myVector , low , middle , high );
		//cout << "Completed Merge" <<endl;
		printVector(myVector);
		cout << endl;
			}
}
	
void merge ( vector <int>& myVector, int low , int middle , int high ) {
	//cout << "low:" << low << " " << "middle:" << middle << " " << "high:" << high <<endl;
	
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

void binarySearch(vector <int>& myVector , int low , int high , int number)
{
	
	int middle,c = 0;
	
	while ( low < high )
	{
		c++;
		cout <<"C : "<< c <<endl;
		middle = low + (high - low)/2 ;
		
		if ( myVector[middle] == number)
		cout << "The number is found" << endl;
		
		if ( myVector[middle] > number)
		high = middle -1 ;
		else
		low = middle+1 ;
	}
}
	

				
	
	
	
	

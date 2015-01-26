#include <iostream>
#include <vector>

using namespace std;

void fillVector ( vector<int>& );
void printVector ( vector <int>& );
void insertionSort ( vector<int>& , int , int );
void insert (vector <int>& , int ,  int );

int main () {
	
	vector <int> myVector ;
	
	fillVector ( myVector) ;
	
	int size = myVector.size() ;
	int high = size - 1;
	int low = 0 ;
	
	insertionSort(myVector , low , high);
	
	cout << "The Final Sorted Vector is : " ;
	printVector(myVector);
	
}

void fillVector ( vector<int>& myVector )
{
	int input;
	
	cout << " Enter the elements of the vector ( Type in -1 to indicate the end of the list) " ;
	cout << endl;
	cin >>input ;
	
	while (input != -1 )
	{
		myVector.push_back(input);
		cin >>input ;
	}
}

void printVector ( vector <int>& myVector )
{
	for ( unsigned int i = 0 ; i < myVector.size() ; i++)
	{
		cout << myVector[i] << "  " ;
	}
}

void insertionSort ( vector <int>& myVector , int low , int high)
{
	cout << "Entered Insertion Sort " << endl ;
	cout << " Low :" << low << "  " << " High :" << high << endl ;
	cout << endl;
	cout << endl;
	if(high > low)
	{
	insertionSort ( myVector , low , high-1 );
	insert ( myVector , low , high);
 }
}

void insert ( vector<int>& myVector , int low , int high ) 
{
	cout << " Low :" << low << "  " << " High :" << high << endl ;
	cout << "Current Vector" <<endl;
	printVector(myVector);
	cout << endl;
	int j;
	for ( int i=low ; i <= high ; i++)
	{		
		j=i;
	while (( j > 0 ) && ( myVector[j] <= myVector [j-1] ))
		{
			swap ( myVector[j] , myVector [j-1]);
			j--;
		}
		
		cout << "Vector after loop where i :" << i << " and high :"  << high << endl;
		printVector(myVector);
		cout << endl;
		
	}	
		
}

	
	

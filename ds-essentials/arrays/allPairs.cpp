#include <iostream>
using namespace	std;

//------------Time Complexity - O(n^2)--------------


void printAllPairs(int* arr,int size){
	for(int i=0; i<size-1;i++){
		for(int j=i+1;j<size;j++){
			cout<<"("<< arr[i] << " " << arr[j] << ") ";
		}
		cout << endl;
	}
}


int main(int argc, char const *argv[])
{	
	cout << "Enter the size of array: " << endl;
	int size = -1;
	cin >> size;
	
	cout << "Enter the elements of the array: " << endl;
	int* arr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	printAllPairs(arr,size);	

	delete[] arr;

	return 0;
}
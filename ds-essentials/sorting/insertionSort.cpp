#include <iostream>
using namespace std;


/*
- Time Complexity - O(n^2)
*/

void insertionSort(int* arr,int size){
	for(int i=1;i<size;i++){
		int temp = arr[i];
		int prev = i-1;
		while(prev>=0&&arr[prev]>temp){
			arr[prev+1] = arr[prev];
			prev--;
		}
		arr[prev+1] = temp;
	}
}

void printArray(int* arr,int size){
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
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

	insertionSort(arr,size);

	printArray(arr,size);

	delete[] arr;

	return 0;
}
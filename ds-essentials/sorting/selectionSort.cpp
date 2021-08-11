#include <iostream>
#include <climits>
using namespace std;


/*
- Time Complexity - O(n^2)
*/

void selectionSort(int* arr,int size){
	for(int i=0;i<size-1;i++){
		int min = i;
		for(int j=i;j<size;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		swap(arr[i],arr[min]);
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

	selectionSort(arr,size);

	printArray(arr,size);

	delete[] arr;

	return 0;
}
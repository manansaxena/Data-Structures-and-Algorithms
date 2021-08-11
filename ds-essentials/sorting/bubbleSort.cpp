#include <iostream>
using namespace std;


/*
- Take larger element to the end by repeatedly swapping the adjacent element 
- Time Complexity - O(n^2)
*/

void bubbleSort(int* arr,int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void bubbleSortOptim(int*arr, int size){
	for(int i=0;i<size-1;i++){
		bool sorted = false;
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				sorted = true;
				swap(arr[j],arr[j+1]);
			}
		}
		if(!sorted){
			return;
		}
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

	// bubbleSort(arr,size);
	bubbleSortOptim(arr,size);

	printArray(arr,size);

	delete[] arr;

	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;


/*
- Time Complexity - O(n+range)
*/

void printArray(int* arr,int size){
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void countingSort(int* arr,int size){
	int max = *max_element(arr,arr+size);
	int* rangeArr = new int[max+1]{0};
	for(int i=0;i<size;i++){
		rangeArr[arr[i]]+=1;
	}
	int counter = 0;
	for(int i=0;i<max+1;i++){
		for(int j=0;j<rangeArr[i];j++){
			arr[counter] = i;
			counter++;
		}
	}
	delete[] rangeArr;
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

	countingSort(arr,size);

	printArray(arr,size);

	delete[] arr;

	return 0;
}
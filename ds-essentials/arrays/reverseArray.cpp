#include <iostream>
using namespace	std;


//----------Time Complexity - O(n)--------------------
//----------Space Complexity - O(1)--------------------

// void reverseArray(int* arr,int size){
// 	for (int i = 0; i < size/2; ++i)
// 	{
// 		int temp = arr[i];
// 		arr[i] = arr[size-1-i];
// 		arr[size-1-i] = temp;
// 	}
// }

void reverseArray(int* arr,int size){
	int start = 0;
	int end = size-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start+=1;
		end-=1;
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

	reverseArray(arr,size);

	printArray(arr,size);

	delete[] arr;

	return 0;
}
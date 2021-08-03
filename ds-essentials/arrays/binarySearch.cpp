#include <iostream>
using namespace	std;

int binarySearch(int* arr,int size,int key){
	int start = 0;
	int end = size - 1;
	while(start<=end){
		int mid = start+(end-start)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			start = mid+1;
		}
		else if(arr[mid]>key){
			end = mid-1;
		}
	}
	return -1;
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

	cout << "Enter the key: " << endl;
	int key = 0;
	cin >> key;

	int res = binarySearch(arr,size,key);
	cout << res << endl;

	delete[] arr;

	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;


/*
- Time Complexity - O(nlogn)
*/

bool compare(int a,int b){
	return a > b;
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
	// to sort in ascending order. we have to give index+1
	sort(arr,arr+size);	
	// to sort in descending order
	// reverse(arr,arr+size);
	// sort(arr,arr+size,greater<int>());
	// sort(arr,arr+size,compare);

	printArray(arr,size);

	// sort a vector
	vector<int> vec = {0,1,2,5,2,4,6};
	sort(vec.begin(), vec.end());

	delete[] arr;

	return 0;
}
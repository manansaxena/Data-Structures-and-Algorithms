#include <iostream>
#include <algorithm>
#include <vector>
#include <pair>
using namespace std;


void printArray(int* arr,int size){
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sortCartesianPts(vector<pair<int,int>> vec){
	int size = vec.size();
	
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

	sortCartesianPts(arr,size);

	printArray(arr,size);

	delete[] arr;

	return 0;
}
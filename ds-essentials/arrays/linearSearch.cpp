#include <iostream>
using namespace	std;

int linearSearch(int* arr,int size,int key){
	for (int i = 0; i < size; ++i)
	{
		if(arr[i]==key){
			return i;
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

	int res = linearSearch(arr,size,key);
	cout << res << endl;

	delete[] arr;

	return 0;
}
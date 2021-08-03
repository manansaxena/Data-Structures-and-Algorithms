#include <iostream>
using namespace	std;


int largetElement(int* arr,int size){
	int largestElement = -1;
	for(int i=0;i<size;i++){
		if(arr[i]>largestElement){
			largestElement = arr[i];
		}
	}
	return largestElement;
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
	cout<<endl;

	int res = largetElement(arr,size);	
	cout << res << endl;

	delete[] arr;

	return 0;
}
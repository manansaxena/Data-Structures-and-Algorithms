#include <iostream>
using namespace	std;


int lowerBound(int* arr,int size, int val){
	int lower = -1;
	for(int i=0;i<size;i++){
		if(arr[i]==val){
			return arr[i];
		}
		if(arr[i]<val && arr[i]>lower){
			lower = arr[i];
		}
	}
	return lower;
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
	cout << "Enter the value: " << endl;
	int val = 0;
	cin >> val;
	cout<<endl;

	int res = lowerBound(arr,size,val);	
	cout << res << endl;

	delete[] arr;

	return 0;
}
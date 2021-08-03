#include <iostream>
using namespace	std;

//------------Time Complexity - O(n^3)--------------
//------------------nC2 subarrays-----------------


void printSubArrays(int* arr,int size){
	for(int i=0;i<size-1;i++){
		cout <<arr[i]<<endl;
		for(int j=i+1;j<size;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k] <<" ";
			}
			cout <<endl;
		}
	}
	cout <<arr[size-1]<<endl;
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

	printSubArrays(arr,size);	

	delete[] arr;

	return 0;
}
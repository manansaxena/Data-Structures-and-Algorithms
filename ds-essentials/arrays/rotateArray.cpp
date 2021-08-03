#include <iostream>
using namespace	std;


// void rotateArray(int* arr,int size, int k){
// 	int last = 0;
// 	while(k>0){
// 		last = arr[size-1];
// 		int temp1 = arr[0];
// 		int temp2 = arr[1];
// 		for(int i=1;i<size;i++){
// 			temp2 = arr[i];
// 			arr[i] = temp1;
// 			temp1 = temp2; 
// 		}
// 		arr[0] = last;
// 		k--;
// 	}
// }

void reverse(int* a,int start,int end){
	while(start<=end){
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
		start++;
	}
}

void rotateArray(int* arr,int size, int k){
	int rot = k%size;
	reverse(arr,0,size-1);
	reverse(arr,0,rot-1);
	reverse(arr,rot,size-1);
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

	rotateArray(arr,size,val);	
	for(int i=0;i<size;i++){
		cout << arr[i] << endl;
	}

	delete[] arr;

	return 0;
}
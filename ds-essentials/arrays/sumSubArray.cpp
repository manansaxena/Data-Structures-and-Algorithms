#include <iostream>
#include <climits>
using namespace	std;

//------------------nC2 subarrays-----------------

//-----------Brute Force - O(n^3)-------------------
// int sumSubArray(int* arr,int size){
// 	int maxSum = INT_MIN;
// 	for(int i=0;i<size;i++){
// 		for(int j=i;j<size;j++){
// 			int sum = 0;
// 			for(int k=i;k<=j;k++){
// 				sum+=arr[k];
// 			}
// 			if(sum>maxSum){
// 				maxSum = sum;
// 			}
// 		}
// 	}
// 	return maxSum;
// }

//-----------Prefix Sum - O(n^2)-----------------------

// int sumSubArray(int* arr,int size){
// 	int maxSum = INT_MIN;
// 	int* prefixArr = new int[size];
// 	prefixArr[0] = arr[0];
// 	for(int i=1;i<size;i++){
// 		prefixArr[i] = prefixArr[i-1]+arr[i];
// 	}
// 	for(int i=0;i<size;i++){
// 		for(int j=i;j<size;j++)for(int j=i;j<size;j++){
// 			int sum = i>0 ? prefixArr[j]-prefixArr[i-1] : prefixArr[j];
// 			if(sum>maxSum){
// 				maxSum = sum;
// 			}
// 		}
// 	}
// 	delete[] prefixArr;
// 	return maxSum;	
// }

//----------Kadane's Algorithm - O(n)-----------------------

int sumSubArray(int* arr,int size){
	int currentSum = 0;
	int maxSum = INT_MIN;

	for(int i=0;i<size;i++){
		currentSum+=arr[i];
		if(maxSum<currentSum){
			maxSum=currentSum;
		}
		if(currentSum<0){
			currentSum = 0;
		}		
	}
	return maxSum;
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

	int res = sumSubArray(arr,size);
	cout << res << endl;

	delete[] arr;

	return 0;
}
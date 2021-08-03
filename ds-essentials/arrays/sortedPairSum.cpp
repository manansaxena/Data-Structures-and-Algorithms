#include <iostream>
#include <utility>
#include <climits>
using namespace	std;


pair<int,int> pairSum(int* arr,int size, int val){
	pair<int,int> closest(0,0);
	int closestDiff = INT_MAX;
	int lower = 0;
	int higher = size-1;
	while(higher-lower>1){
		int sum = arr[lower]+arr[higher];
		int diff = abs(val - sum);

		if(diff==0){
			closest.first = arr[lower];
			closest.second = arr[higher];
			return closest;
		}
		if(diff<closestDiff){
			closestDiff = diff;
			closest.first = arr[lower];
			closest.second = arr[higher];
		} 
		if(sum<val){
			lower = lower + 1;
		}
		else{
			higher = higher - 1;
		}
	}
	return closest;
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

	pair<int,int> res = pairSum(arr,size,val);	
	cout << res.first << " " << res.second << endl;
	delete[] arr;

	return 0;
}
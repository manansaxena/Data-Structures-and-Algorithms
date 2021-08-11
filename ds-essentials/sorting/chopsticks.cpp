#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void print(vector<int> vec){
	int size = vec.size();
	for (int i = 0; i < size; ++i)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

void print(int*arr,int size){
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int pairSticks(vector<int> vec,int d){
	int size = vec.size();
	int max = *max_element(vec.begin(),vec.end());
	int numPairs = 0;

	int* rangeArr = new int[max+d]{0};
	for(int i=0;i<size;i++){
		rangeArr[vec[i]]++;
	}

	for(int i=0;i<max+1;i++){
		int currVal = rangeArr[i];
		while(currVal>0){
			for(int j=i+1;j<=i+d;j++){
				if(rangeArr[j]!=0){
					numPairs++;
					// currVal--;
					rangeArr[j]--;
				}
			}
			currVal--;
		}
	}

	return numPairs;
}

int main(int argc, char const *argv[])
{	
	cout << "Enter the size of vector: " << endl;
	int size = -1;
	cin >> size;
	
	cout << "Enter the elements of the vector: " << endl;
	vector<int> vec(size,0);
	for (int i = 0; i < size; ++i)
	{
		cin >> vec[i];
	}

	cout << "Enter the difference: " << endl;
	int d = 0;
	cin >> d;

	int res = pairSticks(vec,d);

	cout<< res << endl;

	return 0;
}
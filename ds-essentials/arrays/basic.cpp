#include <iostream>
#include <string>
using namespace std;

void printArray(int* arr,int size){
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void printArray(string* arr,int size){
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{	/*
	Different ways of defining an array
	int a[10];
	int b[10] = {0};
	int c[10] = {1,2,3};
	int d[] = {1,2,3,4};
	string fruits[4] = {"apple","banana","guava"};
	printArray(a,10);
	printArray(b,10);
	printArray(c,10);
	printArray(d,4);
	printArray(fruits,4);
	*/

	int marks[100] = {0};
	
	int n;
	cout<< "Enter Number of Student: " <<endl;
	cin >> n;

	//input and updation
	for (int i = 0; i < n; ++i)
	{
		cin >> marks[i];
		marks[i]*=2;
	}

	//output
	printArray(marks,n);

	return 0;
}
#include <iostream>
using namespace std;

void passByReference(int& x){
	x++;
}

void passByPointer(int* xptr){
	(*xptr)++;
}

int main(int argc, char const *argv[])
{
	int x = 21;
	cout << "Address of variable x is: " << &x << endl;

	int* xptr = &x;
	cout << "Address of pointer xptr is: " << &xptr << endl;
	cout << "Value stored by pointer xptr is: " << xptr << endl;

	int** xxptr = &xptr;
	cout << "Address of pointer xxptr is: " << &xxptr << endl;
	cout << "Value stored by pointer xxptr is: " << xxptr << endl;

	cout << "Value of x via xptr: " << *xptr << endl;
	cout << "Value of x via xxptr: " << **xxptr << endl;

	// defining a null pointer
	// int* p = 0;
	// int* p = NULL;

	int& y = x;
	cout << "Via reference variable: " << y << endl;

	passByReference(x);
	cout << "Increment after pass by reference: " << x << endl;

	passByPointer(&x);
	cout << "Increment after pass by pointer: " << x << endl;

	int n;
	cout << "Enter number of elements for the dynamic array" << endl;
	cin >> n;
	int* dArray = new int[n];
	dArray[1] = 21;
	for(int i=0;i<n;i++){
		cout << dArray[i] << " ";
	}
	delete[] dArray;
	dArray = NULL;

	int row,col;
	cout << endl <<"Enter number of rows and columns for 2d dynamic array" << endl;
	cin >> row >> col;
	int** multiArray = new int*[row];
	int val = 0;
	for(int i=0;i<row;i++){
		multiArray[i] = new int[col];
		for(int j=0;j<col;j++){
			multiArray[i][j] = val;
			val++;
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout << multiArray[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=0;i<row;i++){
		delete[] multiArray[i];
	}
	delete[] multiArray;
	multiArray = NULL;

	return 0;
}

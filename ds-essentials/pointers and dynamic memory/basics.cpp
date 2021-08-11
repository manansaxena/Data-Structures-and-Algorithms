#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int x = 21;
	cout << "Address of variable x is: " << &x << endl;

	int* xptr = &x;
	cout << "Address of pointer xptr is: " << &xptr << endl;
	cout << "Value stored by pointer xptr is: " << xptr << endl;

	return 0;
}
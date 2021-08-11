#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char a[100] = "pineapple";
	char b[100];

	// Calculate Length
	cout << strlen(a) << endl;

	// Copy a string (destination,source)
	strcpy(b,a);
	cout << b << endl;

	// Compare a string
	cout << strcmp(a,b) << " " << strcmp(b,a) << endl;

	// concat 

	char first[] = "john";
	char second[] = "bean";
	strcpy(b,strcat(first,second));
	cout << b << " " << strcmp(a,b) << endl;

	return 0;
}
#include <iostream>
#include <cstring>
#include <climits>
using namespace	std;

int main(int argc, char const *argv[])
{
	char tempString[1000];
	int max = INT_MIN;

	int num = 0;
	cout << "Enter the number of strings: "<< endl;
	cin >> num;

	// to consume the \n after writing the number otherwise it will be consumed by getline which would make the loop execute one less time
	cin.get();

	while(num>0){
		cin.getline(tempString,1000);
		int length = strlen(tempString);
		if(length>=max){
			max = length;
		}
		num--;
	}

	cout << "Max length is: "<< max << endl;

	return 0;
}
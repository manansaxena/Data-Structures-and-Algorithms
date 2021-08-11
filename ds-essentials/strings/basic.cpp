#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	
	// for char array also store a null character
	/*
	char a[100];
	cin >> a;

	char b[100] = {'a','b','c','\0'};
	char c[] = "abc";
	
	cout << a << " " << b << " " << c << endl;
	cout << strlen(c) << " " << sizeof(c) << endl;
	*/


	// cin.get() - reads only one character at a time but accepts all the characters including spaces
	/*
	char temp = cin.get();
	char sentence[1000];
	sentence[0] = temp;
	int j = 1;
	while(temp!='\n'){
		temp = cin.get();
		sentence[j] = temp;
		j++;
	}
	sentence[j] = '\0';
	cout <<"And the sentence is: "<< sentence <<endl;
	*/

	// count number of alphabets, spaces and numbers
	/*
	char temp='#';
	int numbers = 0;
	int alphabets = 0;
	int spaces = 0;

	while(temp!='\n'){
		temp = cin.get();
		if((temp>='a' and temp<='z') or (temp>='A' and temp<='Z')){
			alphabets++;
		}
		else if(temp==' ' or temp=='\t'){
			spaces++;
		}
		else if(temp>='0' and temp<='9'){
			numbers++;
		}
	}
	cout << numbers << " " << alphabets << " " << spaces << endl; 
	*/

	// cin.getline()
	char sentence[1000];
	cin.getline(sentence,1000,'.'); // we can also set a stopping character
	cout<<sentence<<endl;

	return 0;
}
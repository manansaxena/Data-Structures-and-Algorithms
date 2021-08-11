#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	
	// dynamic array
	string a = "hello world";
	string b("hello");
	string c;
	getline(cin,c,'.');
	for(char ch: c){
		cout << ch << ',';
	}
	cout << a << " " << b << " " << c << " " << endl;

	cin.get();
	int n = 3;
	vector<string> strArr;
	string temp;
	while(n--){
		getline(cin,temp);
		strArr.push_back(temp);
	}

	for(string s: strArr){
		cout << s << endl;
	}

	return 0;
}
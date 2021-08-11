#include <iostream>
#include <string>

using namespace std;



string vowelsOnly(string s,char* vowels){
	string res = "";
	for(char c: s){
		for(int i=0;i<5;i++){
			if(c==vowels[i]){
				res+=c;
			}
		}
	}
	return res;
}



int main(int argc, char const *argv[])
{	
	char vowels[] = {'a','e','i','o','u'};
	string str;
	cin>> str;
	string res = vowelsOnly(str,vowels);
	cout << res << endl;

	return 0;
}
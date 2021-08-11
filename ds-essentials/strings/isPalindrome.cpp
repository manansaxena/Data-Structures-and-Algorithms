#include <iostream>
#include <string>
#include <cstring>

using namespace std; 

bool isPalindrome(string str){
	int start = 0;
	int end = str.size()-1;
	while(start<=end){
		if(str[start]!=str[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}



int main(int argc, char const *argv[])
{
	string str;
	getline(cin,str);
	bool isIt = isPalindrome(str);
	cout << "Is it? "<< isIt << endl;
 	return 0;
}
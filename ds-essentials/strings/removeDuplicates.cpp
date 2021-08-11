#include <bits/stdc++.h>
using namespace std;


string duplicateString(string s){
	int* rangeArr = new int[128]{0};
	string res;
	for(int i=0;i<s.size();i++){
		int temp = s[i];
		if(rangeArr[temp]==0){
			rangeArr[temp]++;
		}
	}
	for(int i=0;i<128;i++){
		if(rangeArr[i]!=0){
			res+=(char)i;
		}
	}
	return res;
}


int main(int argc, char const *argv[])
{
	string str;
	cin>> str;
	string res = duplicateString(str);
	cout << res << endl;

	return 0;
}
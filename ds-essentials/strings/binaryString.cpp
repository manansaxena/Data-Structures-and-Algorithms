#include <iostream>
#include <string>

using namespace std;

int binaryString(string s){
	int number = 0 ;
	int cnt = 1;
	for(int i=s.size()-1;i>=0;i--){
		int temp = (int)s[i]-48;
		if(temp==1){
			number = number + cnt;	
		}
		cnt*=2;
	}
	return number;
}

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	int res = binaryString(str);
	cout << res << endl;
	return 0;
}
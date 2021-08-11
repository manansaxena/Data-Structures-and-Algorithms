#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;


void print(vector<char> chars){
	for(char c:chars){
		cout << c << ",";
	}
}

int compress(vector<char> chars){
    int length = chars.size();
	int i = 0;
	while(i<length){
		int count = 0;
		char curr = chars[i];
		while(i<length && chars[i]==curr){
			count+=1;
			i++;
		}
		if(count>1 and count<10){
			chars.push_back(curr);
			chars.push_back((char)(count+48));
		}
        else if(count>=10){
			chars.push_back(curr);
			string temp = to_string(count);
			for(char c:temp){
				chars.push_back(c);
			}
		}
		else{
			chars.push_back(curr);
		}
	}
	int resCount = 1;
	for(int index = length;index<chars.size();index++){
		resCount++;
	}
    chars.erase(chars.begin(),chars.begin()+length);

	return resCount-1;
}




int main(int argc, char const *argv[])
{
	int n = 0;
	cout << "Number of inputs" << endl;
	cin >> n ;
	
	vector<char> chars;
	char temp;
	
	while(n--){
		cin>>temp;
		chars.push_back(temp);
	}
	
	int res = compress(chars);
	cout << res << endl;




	return 0;
}
#include <bits/stdc++.h>
using namespace std;

/* Hacky Solution
bool arePermutation(string a, string b)
{
    int lenA = a.size();
    int lenB = b.size();


    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<lenA;i++){
    	if(a[i]!=b[i]){
    		return 0;
    	}
    }
    return 1;
}
*/
/*
	https://leetcode.com/problems/permutation-in-string/
*/

void print(int* arr){
	for(int i=0;i<26;i++){
		cout << arr[i] << " ";
	}
}

bool check(int* a,int* b){
	for(int i=0;i<26;i++){
    	if(a[i]!=0){
    		if(a[i]!=b[i]){
    			return 0;
    		}
    	}
    }

    return 1;
}

bool checkInclusion(string a,string b){
	int windowSize = a.size();
	
	int* arrA = new int[26]{0};
	for(int i=0;i<a.size();i++){
    	int temp = a[i];
    	arrA[temp-97]+=1;
    }

    bool checkTemp = 0;
    for(int i=0;i<b.size()-a.size()+1;i++){
    	int* arrTemp = new int[26]{0};
    	for(int j=0;j<windowSize;j++){
    		int temp = b[i+j];
    		arrTemp[temp-97]+=1;
    	}
    	checkTemp = check(arrA,arrTemp);
    	if(checkTemp==true){
    		return true;
    	}
    	delete[] arrTemp;
    }
    delete[] arrA;
    return false;
}


int main(int argc, char const *argv[])
{
	string a;
	string b;
	cin >> a >> b;

	// bool res = arePermutation(a,b);
	bool res = checkInclusion(a,b);
	cout << res << endl;
	return 0;
}
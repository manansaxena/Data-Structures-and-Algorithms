#include <iostream>
#include <vector>
using namespace std;

/*
	Staircase Search - O(n+m)
*/

void print(int m,int n, vector<vector<int>> arr){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

pair<int,int> search(int n, int m, vector<vector<int>> arr, int x)
{
    int i = 0;
    int j = m-1;
    while(i<n and j>=0){
    	if(arr[i][j]==x){
    		return {i,j}; 
    	}
    	else if(x>arr[i][j]){
    		i = i+1;
    	}
    	else if(x<arr[i][j]){
    		j = j-1;
    	}
    }
    return {-1,-1};
}


int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m;

	vector<vector<int>> arr;
	for(int i=0;i<n;i++){
		vector<int> temp;
		for(int j=0;j<m;j++){
			int x;
			cin >> x;
			temp.push_back(x);
		}
		arr.push_back(temp);
	}

	int x;
	cin >> x;

	pair<int,int> res = search(n,m,arr,x);
	cout << res.first << " "<< res.second <<endl;
	
	return 0;
}
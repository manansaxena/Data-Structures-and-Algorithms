#include<bits/stdc++.h>
using namespace std;


// important - pad the aux array with 0 on top row and left column to avoid handling the boundary cases
vector<vector<int>> auxilaryMatrix(int n,int m,vector<vector<int>> arr){
    vector<vector<int>> auxMatrix(n+1,vector<int> (m+1,0));
    	for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                auxMatrix[i][j] = arr[i-1][j-1]+auxMatrix[i-1][j]+auxMatrix[i][j-1]-auxMatrix[i-1][j-1];
            }
	    }
	return auxMatrix;
}

int sum(vector<vector<int>> matrix, int row1, int col1, int row2, int col2){
    int n = matrix.size();
    int m = matrix[0].size();
    if (n == 0 || m == 0) return 0;
    vector<vector<int>> auxMatrix = auxilaryMatrix(n,m,matrix);
    return auxMatrix[row2+1][col2+1]-auxMatrix[row1+1-1][col2+1]-auxMatrix[row2+1][col1+1-1]+auxMatrix[row1+1-1][col1+1-1];
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

	int res =sum(arr,0,0,2,2);
	cout << res <<endl;
	return 0;
}
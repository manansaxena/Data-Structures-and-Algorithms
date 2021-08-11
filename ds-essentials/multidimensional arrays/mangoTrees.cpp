#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> auxilaryMatrix(int n,int m,vector<vector<int>> arr){
	vector<vector<int>> auxMatrix(n,vector<int> (m,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int temp = arr[i][j];
			if(i==0 and j==0){
				if(temp==0){
					auxMatrix[i][j]=0;
				}
				else{
					auxMatrix[i][j]=1;
				}
			}
			else if(i==0){
				if(temp==0){
					auxMatrix[i][j] = auxMatrix[i][j-1];
				}
				else{
					auxMatrix[i][j] = 1+auxMatrix[i][j-1];
				}
			}
			else if(j==0){
				if(temp==0){
					auxMatrix[i][j] = auxMatrix[i-1][j];
				}
				else{
					auxMatrix[i][j] = 1+auxMatrix[i-1][j];
				}
			}
			else{
				if(temp==0){
					auxMatrix[i][j] = auxMatrix[i-1][j]+auxMatrix[i][j-1]-auxMatrix[i-1][j-1];
				}
				else {
					auxMatrix[i][j] = 1+auxMatrix[i-1][j]+auxMatrix[i][j-1]-auxMatrix[i-1][j-1];
				}
			}

		}
	}
	return auxMatrix;
}



pair<int,int> partition(int n,int m, vector<vector<int>> arr){
	vector<vector<int>> auxMatrix = auxilaryMatrix(n,m,arr);
	pair<int,int> res;
	int max = 0;
	int s1,s2,s3,s4;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			s1 = auxMatrix[i][j];
			s2 = auxMatrix[i][m-1]-s1;
			s3 = auxMatrix[n-1][j]-s1;
			s4 = auxMatrix[n-1][m-1]-(s1+s2+s3);
			int temp = min({s1,s2,s3,s4});
			if(temp>=max){
				max = temp;
				res = {i,j};
			}
		}
	}
	return res;

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

	pair<int,int> res = partition(n,m,arr);
	cout << res.first << " "<< res.second <<endl;
	return 0;
}
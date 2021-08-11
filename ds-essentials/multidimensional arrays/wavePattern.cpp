#include <iostream>
#include <vector>
using namespace std;


void print(int m,int n, vector<vector<int>> arr){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

vector<int> wavePrint(int n, int m, vector<vector<int>> arr)
{
    int start_col = m-1;
    int switchVar = 0;
    vector<int> output;

    for(int i=start_col;i>=0;i--){
    	if(switchVar==0){
    		for(int j=0;j<n;j++){
    			output.push_back(arr[j][i]);
    		}
    		switchVar = 1;
    	}
    	else if(switchVar==1){
    		for(int j=n-1;j>=0;j--){
    			output.push_back(arr[j][i]);
    		}
    		switchVar = 0;
    	}
    }
    return output;

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

	vector<int> res = wavePrint(n,m,arr);
	for(int i=0;i<res.size();i++){
		cout << res[i] << " ";
	}
	cout << endl;
	
	return 0;
}
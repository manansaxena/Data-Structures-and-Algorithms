#include <bits/stdc++.h>

using namespace std;

void print(int arr[][100],int n,int m){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<< arr[i][j] << " ";
		}
		cout << endl;
	}
}


int main(int argc, char const *argv[])
{
	// usually constraints given
	int arr[1000][100];
	// n rows m columns
	int n,m;
	cin >> n >> m;
	//take input
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
		}
	}
	// print array
	print(arr,n,m);

	// character array
	char c[][20] = {
		"Halloween",
		"Temperature"
	};

	cout << c[0] << " " << c[0][8] << endl;

	return 0;
}
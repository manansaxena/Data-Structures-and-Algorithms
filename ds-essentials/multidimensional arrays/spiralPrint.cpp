#include <iostream>
using namespace std;


void topRow(int** arr,int start_row,int start_col,int end_row,int end_col){
	for(int i=start_col;i<=end_col;i++){
		cout << arr[start_row][i] << "top" << endl;
	}
}

void rightCol(int** arr,int start_row,int start_col,int end_row,int end_col){
	for(int i=start_row+1;i<=end_row;i++){
		cout << arr[i][end_col] << "right" << endl;
	}
}

void bottomRow(int** arr,int start_row,int start_col,int end_row,int end_col){
	for(int i=end_col-1;i>=start_col;i--){
		if(start_row==end_row){
			break;
		}
		cout << arr[end_row][i] << "bottom" << endl;
	}
}

void leftCol(int** arr,int start_row,int start_col,int end_row,int end_col){
	for(int i=end_row-1;i>start_row;i--){
		if(start_col==end_col){
			break;
		}
		cout << arr[i][start_col] << "left" << endl;
	}
}


void spiralArray(int** arr, int n,int m){
	int start_col = 0;
	int start_row = 0;
	int end_col = m-1;
	int end_row = n-1;
	
	// int count = n/2;
	while(start_row<=end_row and start_col<=end_col){
		topRow(arr,start_row,start_col,end_row,end_col);
		rightCol(arr,start_row,start_col,end_row,end_col);
		bottomRow(arr,start_row,start_col,end_row,end_col);
		leftCol(arr,start_row,start_col,end_row,end_col);

		start_row+=1;
		end_row-=1;
		start_col+=1;
		end_col-=1;
		// count--;
	}
}




int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m;

	int** arr = new int*[n];
	for(int i=0;i<n;i++){
		arr[i] = new int[m];
		for(int j=0;j<m;j++){
			cin >> arr[i][j];
		}
	}

	spiralArray(arr,n,m);
	cout << endl;
	
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	char directions[1000];
	cin.getline(directions,1000,'\n');
	int counter[4] = {0};
	int i = 0;
	while(directions[i]!='\0'){
		if(directions[i]=='N'){
			counter[0]++;
		}
		else if(directions[i]=='E'){
			counter[1]++;
		}
		else if(directions[i]=='S'){
			counter[2]++;
		}
		else{
			counter[3]++;
		}
		i++;
	}

	vector<char> shortestPath;
	for(int i=0;i<abs(counter[0]-counter[2]);i++){
		if(counter[0]>counter[2]){
			shortestPath.push_back('N');
		}
		else{
			shortestPath.push_back('S');
		}
	}
	for(int i=0;i<abs(counter[1]-counter[3]);i++){
		if(counter[1]>counter[3]){
			shortestPath.push_back('E');
		}
		else{
			shortestPath.push_back('W');
		}
	}
	
	for(char x:shortestPath){
		cout << x ;
	}

	return 0;
}
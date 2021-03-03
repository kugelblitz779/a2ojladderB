#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
#define acc accumulate
using namespace std;

int grid[5][5];

int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>grid[i][j];
		}
	}

	int z =	grid[0][0];
	int x = grid[1][1];
	int y = grid[2][2];

	int sumInZ = 0;
	for(int i=0; i<3; i++){
		sumInZ += grid[0][i];
	}
	int sumInX = 0;
	for(int i=0; i<3; i++){
		sumInX += grid[1][i];
	}

	int sumInY = 0;
	for(int i=0; i<3; i++){
		sumInY += grid[2][i];
	}

	z = sumInX - sumInZ + x;  // z = 10 - 9 + 0  --> z = x + 1

	y = sumInX - sumInY + x;  // y = 10 - 11 + 0  --> y = x - 1

	//x + 1 + x + x - 1 = sumInX + x

	int dev = abs(y);

	x = sumInX/2;

	z = x + dev;
	y = x - dev;


	grid[1][1] = x;
	if(sumInX + x == sumInZ + z){
		grid[0][0] = z;
		grid[2][2] = y;
	}else if(sumInX + x == sumInZ + y){
		grid[0][0] = y;
		grid[2][2] = z;
	}

	

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<grid[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
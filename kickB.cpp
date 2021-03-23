#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
#define acc accumulate
using namespace std;



int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin>>t;

	int tc = 1;
	while(t--){

		int r, c; cin>>r>>c;
		int grid[r][c];

		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin>>grid[i][j];
			}
		}

		int ones = 0;
		int l_shape = 0;

		int l = 0;

		for(int i=0; i<c; i++){
			ones = 0;
			l = 0;
			for(int j=0; j<r; j++){
				if(grid[j][i] == 1){
					ones++;
				}else{
					ones = 0;
				}

				if(ones >= 4 && ones%2 == 0){
					int minorArm = 0;
					int limit = ones/2;
					for(int k = i; k<i+limit; k++){
						if(grid[j][k] == 1) minorArm++;
						if(minorArm == limit){
							l++;
							break;
						}
					}

					minorArm = 0;
					for(int k=i; k>=i-limit+1; k--){
						if(grid[j][k] == 1) minorArm++;
						if(minorArm == limit){
							l++;
							break;
						}
					}

					int row = j+1-ones;
					minorArm = 0;
					for(int k=i; k<i+limit; k++){
						if(grid[row][k] == 1)minorArm++;
						if(minorArm == limit){
							l++;
							break;
						}
					}

					minorArm = 0;
					for(int k=i; k>=i-limit+1; k--){
						if(grid[row][k] == 1)minorArm++;
						if(minorArm == limit){
							l++;
							break;
						}
					}


					if(ones >= 4 && l){
						int diff = ones - 4;
						int ans = diff/2;

						l += ans*l;
					}
				}



			}
			 l_shape += l;

		}

		
		for(int i=0; i<r; i++){
			ones = 0;
			l = 0;
			for(int j=0; j<c; j++){

				if(grid[i][j] == 1){
					ones++;
				}else{
					ones = 0;
				}


				if(ones >= 4 && ones%2 == 0){

					int minorArm = 0;
					int limit = ones/2;

					for(int k=i; k<i+limit; k++){
						if(grid[k][j] == 1)minorArm++;
						if(minorArm == limit){
							l++;
							break;
						}
					}

					minorArm = 0;
					for(int k=i; k>=i-limit+1; k--){
						if(grid[k][j] == 1)minorArm++;
						if(minorArm == limit){
							l++;
							break;
						}
					}

					int col = j+1 -ones;
					minorArm = 0;
					for(int k=i; k<i+limit; k++){
						if(grid[k][col] == 1)minorArm++;
						if(minorArm == limit){
							l++;
							break;
						}
					}

					minorArm = 0;
					for(int k=i; k>=i-limit+1; k--){
						if(grid[k][col] == 1)minorArm++;
						if(minorArm == limit){
							l++;
							break;
						}
					}

					if(ones >= 4 && l){
						int diff = ones - 4;
						int ans = diff/2;

						l += ans*l;
					}

				}

			}

			l_shape += l;
		}
	
		cout<<"# "<<l_shape<<endl;

		tc++;
	}



	return 0;
}
#include<bits/stdc++.h>
#define int int64_t
using namespace std;



int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, m, k; cin>>n>>m>>k;

	bitset<32> arr[m+10];

	int x;
	for(int i=0; i<m+1; i++){
		cin>>x;
		arr[i] = x;
	}

	int ans = 0;

	for(int i=0; i<m; i++){

		int k_diff = 0;
		for(int j=0; j<32; j++){
			if(arr[i][j] != arr[m][j]){
				k_diff++;
			}
		}

		if(k_diff <= k){
			ans++;
		}
	}
	
	cout<<ans<<"\n";

	return 0;
}

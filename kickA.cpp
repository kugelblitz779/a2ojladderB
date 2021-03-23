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

		int n, k; cin>>n>>k;
		string s; cin>>s;

		int mid = n/2;

		int diff = 0;

		for(int i=0; i<mid; i++){
			if(s[i] != s[n-1-i]){
				diff++;
			}
		}

		int ans = abs(k-diff);

		cout<<"Case #"<<tc<<": "<<ans<<"\n";

		tc++;
	}



	return 0;
}
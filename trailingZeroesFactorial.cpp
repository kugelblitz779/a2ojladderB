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

	int n; cin>>n;

	int res = 0;

	for(int i=5; i<=n; i*=5){

		res = res + n/i;
	}


	cout<<res<<"\n";

	return 0;
}
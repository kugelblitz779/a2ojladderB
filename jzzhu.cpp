#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
using namespace std;

const int mod = 1000000007;

int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int x, y; cin>>x>>y;

	int n; cin>>n;
	n--;

	int arr[6] = {x, y, y-x, -x, -y, x-y};

	
	for(int i=0; i<6; i++){
		arr[i] = arr[i]%mod;
	}



	int ans = arr[n%6];

	if(ans < 0){
		ans = (mod + ans)%mod;
	}
	
	cout<<ans<<"\n";
	

	return 0;
}
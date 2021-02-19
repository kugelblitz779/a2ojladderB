#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
using namespace std;

int arr[1001];

int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, l; cin>>n>>l;

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	sort(arr, arr+n);

	int t = max(abs(arr[0]-0), abs(arr[n-1]-l));

	double maxi = double(t);
	// cout<<fixed<<setprecision(9)<<maxi<<"\n";

	for(int i=0; i<n-1; i++){

		int diff = abs(arr[i]-arr[i+1]);
		double half = double(diff)/2;

		// cout<<half<<"\n";

		if(half - maxi > 0){
			maxi = half;
		}
	}	

	cout<<fixed<<setprecision(10)<<maxi<<"\n";

	return 0;
}
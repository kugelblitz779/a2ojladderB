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

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin>>v[i];
	}

	// int sum = 0;
	// sum = acc(v.begin(), v.end(), sum);
	// cout<<sum<<endl;

	int sumOfDiff = 0;

	for(int i=1; i<n; i++){
		int num = abs(v[i]-v[i-1]);
		sumOfDiff += num;
	}


	int headstart = v[0];
	int jumps = n-1;
	int nuts = n;

	cout<<sumOfDiff+jumps+nuts+headstart<<"\n";


	return 0;
}
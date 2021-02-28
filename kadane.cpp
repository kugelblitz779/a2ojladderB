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

	int current_sum = 0;
	int max_sum = INT_MIN;
	int start = 0, end;
	for(int i=0; i<n; i++){

		current_sum += v[i];

		if(current_sum > max_sum){
			max_sum = current_sum;
			end = i;
		}

		if(current_sum < 0){
			start = i+1;
			end = i+1;
			current_sum = 0;
		}

	}

	cout<<max_sum<<"\n";
	cout<<start<<" "<<end<<"\n";

	return 0;
}
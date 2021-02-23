#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
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

	if(n == 2){
		if(max(v[0], v[1]) == v[0]){
			cout<<1<<"\n";
		}else{
			cout<<0<<"\n";
		}
	}else{

		int count = 0;
		int sum = 0;

		for(int i=0; i<n-1; i++){
			count = 0;
			for(int j=n-1; j>=i+1; j--){
				if(v[j] < v[i]){
					count++;
				}
			}

			sum += count;
		}

		if(sum%2 != 0){
			cout<<-1<<"\n";
		}else{
			cout<<sum<<"\n";
		}

		
	}


	return 0;
}
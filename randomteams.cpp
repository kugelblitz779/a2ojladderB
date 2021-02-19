#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
using namespace std;

int func(int k){

	return (k*(k-1))/2;
}


int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m; cin>>n>>m;


	if(n == m){
		cout<<0<<" "<<0<<"\n";
	}else{

		// vector<int> ele;

		// while(t){

		// 	num = floor(double(t)/rem);
		// 	t = t - num;
		// 	rem -= 1;
		// 	ele.pb(num);

		// }

		// int k_min = 0;
		// for(int x : ele){
		// 	if(x != 1){
		// 		k_min += func(x);
		// 	}
		// }

		// if(k_min == 0) k_min = 1;

		int size = n/m;
		int rem = n%m;


		int k_min = rem*func(size+1) + (m-rem)*func(size);

		int k_max = 0;

		int s = n - m + 1;

		k_max = func(s);

		if(!k_max) k_max = 1;

		cout<<k_min<<" "<<k_max<<"\n";

	}

	return 0;
}
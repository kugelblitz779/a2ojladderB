#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
using namespace std;


bool comp(pair<int, int> p1, pair<int, int> p2){

	if(p1.first != p2.first){
		return p1.first > p2.first;
	}else{
		return p1.second < p2.second;
	}
}

int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin>>t;

	while(t--){

		int n; cin>>n;

		vector<pair<int, int>> v;
		map<int, int> mp;
		vector<int> res(n);


		for(int i=0; i<n; i++){
			int x; cin>>x;
			v.pb(make_pair(x, i+1));
		}

		sort(v.begin(), v.end(), comp);


		for(int i=0; i<n; i++){
			pair<int, int> p = v[i];
			res[p.second-1] = i+1;
		}

		for(int x : res){
			cout<<x<<" ";
		}
		cout<<"\n";

	}


	return 0;
}
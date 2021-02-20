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

	int n, m; cin>>n>>m;
	unordered_map<string, string> mp;

	for(int i=0; i<m; i++){
		string s1, s2;
		cin>>s1>>s2;

		if(s1.size() > s2.size()){
			mp[s1] = s2;
		}else{
			mp[s1] = s1;
		}
	}
	
	
	for(int i=0; i<n; i++){
		string s; cin>>s;

		cout<<mp[s]<<" ";
	}
	cout<<"\n";

	return 0;
}
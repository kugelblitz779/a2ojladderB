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
	unordered_map<string, string> mp1;
	unordered_map<string, string> mp2;

	for(int i=0; i<m; i++){

		string s1, s2;
		cin>>s1>>s2;

		mp1[s1] = s2;
		mp2[s2] = s1;
	}

	vector<string> vs;
	for(int i=0; i<n; i++){
		string s; cin>>s;
		vs.pb(s);
	}

	// for(auto x : mp1){
	// 	cout<<x.first<<"->"<<x.second<<"\n";
	// }

	
	string n1, n2;
	for(int i=0; i<vs.size(); i++){
		if(mp1.find(vs[i]) != mp1.end()){
			n1 = vs[i];
			n2 = mp1[n1];

		}else if(mp2.find(vs[i]) != mp2.end()){
			n2 = vs[i];
			n1 = mp2[n2];
		}


		if(n1.size() <= n2.size()){
			cout<<n1<<" ";
		}else{
			cout<<n2<<" ";
		}

	}
	cout<<"\n";
	

	return 0;
}
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

	string s; cin>>s;

	int k; cin>>k;
	map<char, int> mp;

	char c = 'a';
	int num;
	for(int i=0; i<26; i++){
		cin>>num;
		mp[c] = num;
		c++;
	}


	int maxi = INT_MIN;
	char maxChar;
	for(auto x : mp){
		if(x.second > maxi){
			maxi = x.second;
			maxChar = x.first;
		}
	}

	int total=0;
	int i;
	for(i=0; i<s.size(); i++){
		total += mp[s[i]]*(i+1);
	}


	for(int p=i; p<i+k; p++){
		total += mp[maxChar]*(p+1);
	}

	cout<<total<<"\n";

	return 0;
}
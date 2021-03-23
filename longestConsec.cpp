#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
#define acc accumulate
#define f(n) for(int i=0;i<n;i++) 
#define f1(n) for(int i=1;i<n;i++) 
#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;

int longest_consec_subseq(vector<int> &v, int n){

	sort(v.begin(), v.end());

	int cnt = 1;
	int maxCount = 0;

	f(n-1){
		if(abs(v[i] - v[i+1]) == 1){
			cnt++;
		}else{
			maxCount = max(maxCount, cnt);
			cnt = 1;
		}
	}

	return maxCount;

}

int optimal(vector<int> &v, int n){

	set<int> st;

	f(n){
		st.insert(v[i]);
	}

	int maxCount = 0;

	f(n){
		if(!st.count(v[i]-1)){
			int cnt = 1;
			int num = v[i];
			while(1){
				num++;
				if(!st.count(num)) break;
				cnt++;
			}

			maxCount = max(cnt, maxCount);
		}
	}

	return maxCount;

}



int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin>>n;

	vector<int> v(n);

	f(n){
		cin>>v[i];
	}

	// int ans = longest_consec_subseq(v, n);   // O(NlogN) + O(N)  Soln
	int ans2 = optimal(v, n);                   // O(N)  Soln
	// cout<<ans;
	cout<<ans2;

	return 0;
}
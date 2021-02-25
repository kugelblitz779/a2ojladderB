#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
#define acc accumulate
using namespace std;

const int N = 1e5 + 10;

int arr[N];
int visited[N];

int dfs(int node, int depth, int end){

	if(visited[node] == 1){
		return -1;
	}else if(node == end){
		return depth;
	}else{

		visited[node] = 1;
		return dfs(arr[node], depth+1, end);
	}

}

int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, s, t; cin>>n>>s>>t;


	for(int i=1; i<=n; i++){
		int x; cin>>x;
		arr[i] = x;
	}
	

	cout<<dfs(s, 0, t)<<"\n";


	return 0;
}
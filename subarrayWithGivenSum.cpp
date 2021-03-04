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

	int n, s; cin>>n>>s;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int curr = 0;
    int start = 0; // start from beginning
    int sum = 0;


    int ff = 0;
    while(curr <= n){
        
        if(sum < s){					//add elements if sum < s
            sum += arr[curr];
            curr++;
        }else if(sum > s){  			// if greater than sum > s
        								//start removing elements from begin
            sum -= arr[start];
            start++;
        }
        
        
        if(sum == s) {
            ff = 1;
            break;
        }
        
        
        
    }

    vector<int> res;
    if(ff){
    	res.emplace_back(start+1);
    	res.emplace_back(curr);
    }else{
    	res.emplace_back(-1);
    }

    for(int x : res){
    	cout<<x<<" ";
    }
    cout<<"\n";

	return 0;
}
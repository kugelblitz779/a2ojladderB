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

	int n, target; cin>>n>>target;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    sort(arr.begin(), arr.end());
    
    
    //-7 1 1 3 8 9
    int minSum;
    int mini = INT_MAX;
    for(int i=0; i<n-2; i++){
         
        int lo = i+1;
        int hi = n-1;
        
        int diff;
        while(lo < hi){
            int sum = arr[lo] + arr[hi] + arr[i];
            
            int diff = abs(target-sum);
            
            if(diff == 0){
                cout<<target<<endl;
                return 0;
            }
            
            if(sum < target) lo++;
            else hi--;
            
            if(diff < mini){
                mini = diff;
                minSum = sum;
            }
            
            if(diff == mini){
                minSum = max(sum, minSum);
            }
        }
        
    }
        
        
    cout<<minSum<<endl;



	return 0;
}
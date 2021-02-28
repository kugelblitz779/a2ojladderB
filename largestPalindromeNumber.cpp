#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
#define acc accumulate
using namespace std;


bool isPalindrome(int num){

	int tmp = num;
	int ans = 0;

	while(tmp > 0){

		int r = tmp%10;

		ans = ans*10 + r;

		tmp = tmp/10;

	}

	return ans == num;

}


int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	
	int a = 999;
	int b = 999;

	int maxi = 0;

	for(int i=100; i<=999; i++){
		for(int j=100; j<=999; j++){
			if(isPalindrome(i*j)){
				int f = i*j;
				maxi = max(maxi, f);
			}
		}
	}
	
	cout<<maxi<<endl;
	return 0;
}
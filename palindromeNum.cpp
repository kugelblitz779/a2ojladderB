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


	int n; cin>>n;

	int num = n;
	int rnum = 0;
	while(n > 0){

		int r = n%10;

		rnum = rnum*10 + r;

		//for eg 255
		// 0*10 + 5 = 5
		// 5*10 + 5 = 55 
		// 55*10 + 2 = 552

		n = n/10;

	}

	if(num == rnum){
		cout<<"Palindrome"<<"\n";
	}else{
		cout<<"Not Palindrome"<<"\n";
	}

	return 0;
}
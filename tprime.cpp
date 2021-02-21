#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
using namespace std;

const int N = 1e6 + 10;

int prime[N];

void sieve(){

	for(int i=2; i*i <N; i++){

		if(prime[i]){

			for(int j=i*i; j<N; j+=i){
				prime[j] = 0;
			}
		}

	}

}

bool isPrime(int x){

	return prime[x];
}


bool isPerfectSquare(int x){


	int tmp = sqrt(x);

	while(tmp*tmp < x){
		tmp++;
	}

	while(tmp*tmp > x){
		tmp--;
	}

	if(tmp*tmp == x){
		return true;
	}

	return false;

}


int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin>>n;

	vector<int> v(n);

	fill(prime, prime + N, 1);
	sieve();


	for(int i=0; i<n; i++){
		cin>>v[i];
	}


	for(int i=0; i<n; i++){
		if(v[i] == 1){
			cout<<"NO"<<"\n";
		}else if(isPerfectSquare(v[i])){
			int tmp = sqrt(v[i]);
			if(isPrime(tmp)){
				cout<<"YES"<<"\n";
			}else{
				cout<<"NO"<<"\n";
			}
		}else{
			cout<<"NO"<<"\n";
		}
	}


	return 0;
}
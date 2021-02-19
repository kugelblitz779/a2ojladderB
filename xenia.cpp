#include<bits/stdc++.h>
#define ll int64_t
using namespace std;

ll distance(ll x, ll y, ll n){

	if(x == y){
		return 0;
	}
	if(x < y){

		return y-x;
	}else{

		ll dist = n - x;

		return dist + y;

	}

}


//Using modulo operation we can define the same function 
//in different way

ll distanceModulo(ll x, ll y, ll n){

	return (y-x + n)%n;

}


int main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);



	ll n, m; cin>>n>>m;

	vector<ll> v(m);

	for(ll i=0; i<m; i++){
		cin>>v[i];
	}


	ll sum = v[0]-1;
	for(ll i=0; i<m-1; i++){
		sum += distanceModulo(v[i], v[i+1], n);
		// cout<<sum<<endl;
	}
	

	cout<<sum<<endl;

	return 0;
}

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

	int n; cin>>n;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}

	
	if(n == 2){

		if(v[0] > v[1]){
			cout<<1<<"\n";
		}else{
			cout<<0<<"\n";
		}

		return 0;
	}


	int ff = 1;
	int gg = 1;
	int pos;

	for(int i=0; i<n-1; i++){

		if(ff){
			if(v[i] > v[i+1]){
				pos = i;
				ff = 0;
			}
		}else{
			if(v[i+1] < v[i]){
				gg = 0;
			}

		}

	}

	if(v[0] < v[n-1]){
		gg = 0;
	}

	if(ff){
		if(v[0] == v[n-1]){
			ff = 0;
			pos = n-1;
		}

		if(v[0] < v[n-1]){
			gg = 1;
			ff = 0;
			pos = n-1;
		}

	}

	


	if(!ff && gg){
		cout<<n-pos-1<<"\n";
	}else{
		cout<<-1<<"\n";
	}





	

	return 0;
}
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

	int i = 0;
	while(i < n-1 && v[i] < v[i+1]){
		i++;
	}

	int peakPos = i;

	while(i < n-1 && v[i] > v[i+1]){
		i++;
	}

	int valleyPos = i;

	while(i < n-1 && v[i] < v[i+1]){
		i++;
	}

	if(i != n-1){
		cout<<"no"<<"\n";
	}else if(peakPos == valleyPos){
		cout<<"yes"<<"\n";
		cout<<1<<" "<<1<<"\n";
	}else{

		bool case1 = (peakPos > 0) ? v[valleyPos] > v[peakPos-1] : true;
		bool case2 = (valleyPos < n-1) ? v[peakPos] < v[valleyPos+1]: true;

		if(case1 && case2){
			cout<<"yes"<<"\n";
			cout<<peakPos+1<<" "<<valleyPos+1<<"\n";
		}else{
			cout<<"no"<<"\n";
		}

	}

	return 0;
}
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

	int cnt = 0;
	for(int i=0; i<n-1; i++){
		if(v[i] <= v[i+1]){
			cnt++;
		}
	}

	if(cnt == n-1){
		cout<<0<<"\n";
	}else{

		int mini = INT_MAX;
		int minPos;
		for(int i=0; i<v.size(); i++){
			if(v[i] <= mini){
				mini = v[i];
				minPos = i;
			}
		}

		int i = (minPos+1)%n;
		int last = v[minPos];

		int ff = 0;

		while(i != minPos){
			if(last > v[i]){
				ff = 1;
				break;
			}

			// cout<<v[i]<<" ";

			last = v[i];

			i = (i+1)%n;
		}


		if(ff){
			cout<<-1<<"\n";
		}else{
			cout<<(n-minPos)%n<<"\n";
		}



	}

	

	return 0;
}
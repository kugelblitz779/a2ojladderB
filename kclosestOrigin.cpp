#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
#define acc accumulate
using namespace std;

double findD(int x, int y){
        
    x = pow(x, 2);
    y = pow(y, 2);
    
    return sqrt(x+y);        
}


int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k; cin>>n>>k;
	vector<vector<int> > points(n);

	for(int i=0; i<n; i++){
		int x, y; cin>>x>>y;

		points[i].push_back(x);
		points[i].push_back(y);
	}

	map<double , vector<pair<int, int> > > mp;
    for(int i=0; i<points.size(); i++){
        int x = points[i][0];
        int y = points[i][1];

        // cout<<x<<" "<<y<<"\n";
        
        double dist = findD(x, y);

        // cout<<dist<<endl;
        
        mp[dist].push_back(make_pair(x, y));
    }
    


    
    vector<vector<int> > res;
    int count = 0;

    bool ff = 0;
    for(auto x : mp){
        vector<pair<int, int> > vpp = x.second;
        cout<<vpp.size()<<endl;

        for(int i=0; i<vpp.size(); i++){

        	vector<int> tmp;
        	tmp.emplace_back(vpp[i].first);
        	tmp.emplace_back(vpp[i].second);

        	cout<<vpp[i].first<<" "<<vpp[i].second<<"\n";
        	res.push_back(tmp);
        	count++;

        	if(count == k){
        		ff = 1;
    			break;
    		}
        }

        if(ff){
        	break;
        }

    }
    
    // for(int i=0; i<res.size(); i++){
    // 	vector<int> tmp = res[i];

    // 	for(int i=0; i<tmp.size(); i++){
    // 		cout<<tmp[i]<<" ";
    // 	}
    // 	cout<<"\n";
    // }

    // for(auto x : mp){
    // 	vector<pair<int, int> > vpp = x.second;
    // 	cout<<x.first<<"->";
    // 	for(int i=0; i<vpp.size(); i++){
    // 		cout<<vpp[i].first<<", "<<vpp[i].second<<" ";
    // 	}
    // 	cout<<"\n";
    // }
    

	return 0;
}
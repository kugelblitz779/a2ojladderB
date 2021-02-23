#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
using namespace std;


double distance(int x1, int y1, int x2, int y2){

	int y = abs(y1-y2);
	int x = abs(x1-x2);

	return sqrt(pow(x, 2) + pow(y, 2));

}


int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int r, x1, y1, x2, y2;

	cin>>r>>x1>>y1>>x2>>y2;


	double d = distance(x1, y1, x2, y2);

	int den = 2*r;

	int ans = ceil(d/den);

	cout<<ans<<"\n";

	return 0;
}
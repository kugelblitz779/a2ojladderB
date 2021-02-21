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

	string num; cin>>num;

	string tmp = num;

	// cout<<num<<"\n";

	int len = num.size();

	char last = num[len-1];
	int lastnum = num[len-1] - '0';

	// cout<<lastnum<<endl;

	num.erase(num.begin()+(len-1));

	len = num.size();

	// cout<<last<<endl;
	// cout<<num<<endl;

	int pos;
	int lnum;

	int ff = 0;
	int gg = 0;
	for(int i=0; i<len; i++){
		int no = num[i] - '0';

		if(no%2 == 0){

			ff =1;
			if(no < lastnum){
				gg = 1;
				pos = i;
				break;
			}
		}
	}

	if(!ff){
		cout<<-1<<"\n";
	}else{

		if(gg){
			char c = num[pos];
			num[pos] = last;
			num.push_back(c);

			cout<<num<<"\n";
		}else{

			int posi;
			for(int i=len-1; i>=0; i--){
				int no = num[i] - '0';

				if(no%2 == 0){
					posi = i;
					break;
				}
			}

			char c = num[posi];
			num[posi] = last;
			num.push_back(c);

			cout<<num<<"\n";

		}
	}


	return 0;
}
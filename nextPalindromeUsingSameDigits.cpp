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

    string s; cin>>s;

	 int len = s.size();
        
        //334433
    int mid = len/2;
    
    string h = "";
    
    for(int i=0; i<mid; i++){
        h.push_back(s[i]);
    }
    
    int pos = -1;
    int num;
    char c;
    for(int i=h.size()-2; i>=0; i--){
        
        int curr = h[i] - '0';
        int prev = h[i+1] - '0';
        
        if(curr < prev){
            pos = i;
            c = h[i];
            break;
        }
        
    }
    
    
    
    if(pos == -1){
        cout<<-1<<endl;
        return 0;
    }
    
    int mpos;
    num = c -'0';
    
    int mini = INT_MAX;
    for(int i=pos+1; i<h.size(); i++){
        int curr = h[i] - '0';
        if(curr > num){
            if(curr < mini){
                mini = curr;
                mpos = i;
            }
            
        }
    }
    
    swap(h[pos], h[mpos]);
    string t = h.substr(0, pos+1);
    
    string yet = "";
    for(int i=pos+1; i<h.size(); i++){
        yet.push_back(h[i]);
    }
    
    sort(yet.begin(), yet.end());
    
    cout<<yet<<endl;
    cout<<t<<endl;
    
    string temp = t + yet;
    string noname = temp;
    
    if(len%2 != 0){
        temp.push_back(s[mid]);
    }
    
    
    
    reverse(noname.begin(), noname.end());
    
    temp = temp + noname;
    
    // for(int i=0; i<h.size(); i++){
    //     temp.push_back(h[i]);
    // }
    
    
    cout<<temp<<endl;

	return 0;
}
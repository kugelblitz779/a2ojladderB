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

	string a, b;
	cin>>a>>b;

	map<char, int> mp1;
	map<char, int> mp2;
	set<char> s1; 
	set<char> s2;

	for(char i : a){
		mp1[i]++;
		s1.insert(i);
	}

	for(char i : b){
		mp2[i]++;
		s2.insert(i);
	}

	int ff = 0;

	//if there are new char in string B not present in string A then we 
	//need tree. As we cannot add new characters. 

	for(char x : s2){
		if(!s1.count(x)){
			cout<<"need tree \n";
			return 0;
		}
	}
	

	//if a char occurs more number of times in string B than string A then 
	//we need tree again since we cannot add chars.

	//if however a char occurs less in string B than in string A then we can 
	//convert string A to string B by using 'deletion' or 'automaton'.

	for(auto x : mp1){

		if(x.second < mp2[x.first]){
			cout<<"need tree \n";
			return 0;
		}else if(x.second > mp2[x.first]){
			ff = 1;
		}
	}

	//if the sequence of char in string B is same as in string A after deleting
	//some elements then it is strictly 'automaton' if it is not then 
	//the answer is 'both'.

	//if we dont need to delete char and the sequence of char in string B is 
	//not same as in string A then we need strictly 'array'.

	int pos = 0;
	int gg = 1;
	for(int i=0; i<a.size(); i++){

		if(a[i] == b[pos]){
			pos++;
		}
		if(pos == b.length()){
			gg = 0;              //b is perfect subsequence of a 
			break;
		}
	}
	
	if(gg && ff){
		cout<<"both \n";
	}else if(gg){
		cout<<"array \n";
	}else{
		cout<<"automaton \n";
	}


	return 0;
}
#include<bits/stdc++.h>
#define int int64_t
#define pb emplace_back
#define acc accumulate
using namespace std;

int arr[51];


int merge(int arr[], int lo, int mid, int hi){

	int n1 = mid-lo + 1;
	int n2 = hi - mid;

	int a[n1]; int b[n2];


	for(int i=0; i<n1; i++){
		a[i] = arr[i+lo];
	}

	for(int i=0; i<n2; i++){
		b[i] = arr[mid+1+i];
	}

	int i = 0;
	int j = 0;

	int inv = 0;
	int pos = lo;

	while(i < n1 && j < n2){

		if(a[i] <= b[j]){
			arr[pos++] = a[i];
			i++;
		}else{
			arr[pos++] = b[j];
			inv += n1 - i;
			j++;
		}

	}

	while(i < n1){
		arr[pos++] = a[i];
		i++;
	}

	while(j < n2){
		arr[pos++] = b[j];
		j++;
	}

	return inv;
}



int merge_sort(int arr[], int lo, int hi){

	int inv_count = 0;

	if(lo >= hi){
		return 0;
	}

	int mid = lo + (hi-lo)/2;

	inv_count += merge_sort(arr, lo, mid);

	inv_count += merge_sort(arr, mid+1, hi);


	inv_count += merge(arr, lo, mid, hi);


	return inv_count;
}




int32_t main(){

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin>>n;

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int countInv = 0;

	countInv = merge_sort(arr, 0, n-1);

	cout<<countInv<<"\n";

	return 0;
}
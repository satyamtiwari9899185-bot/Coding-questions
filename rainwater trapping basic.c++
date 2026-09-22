#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[] = {4, 2, 0, 3, 2, 5}, n = 6;
	vector<int>lmax(n, 0);
	vector<int>rmax(n, 0);
	lmax[0] = arr[0];
	rmax[n-1] = arr[n-1];
	int ans = 0;
	int i;
	for(i = 1; i < n; i++){
		lmax[i] = max(lmax[i-1], arr[i]);
	}
	for(i = n-2; i >= 0; i--){
		rmax[i] = max(rmax[i+1], arr[i]);
	}
	for(i = 0; i < n; i++){
		ans = ans + (min(lmax[i], rmax[i]) - arr[i]);
	}
	cout<< ans << endl;
	return 0;
}

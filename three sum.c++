#include<iostream>
#include<vector>
#include<tuple>
using namespace std;
int main(){
	int arr[] = {2, 8, 4, 7, 1, 0, 9, 6}, n = 8;
	int i;
	int target = 15;
	vector<tuple<int, int, int>>ans;
	int j;
	int k;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			for(k = j+1; k < n; k++){
				if(arr[i] + arr[j] + arr[k] == target)
				{
					ans.push_back(make_tuple(i, j, k));
				}
			}
		}
	}
	for(auto x : ans){
		int i, j, k;
		tie(i, j, k) = x;
		cout<< i << " " << j << " " << k << endl;
	}
	return 0;
}

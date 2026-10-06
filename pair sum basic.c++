#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[] = {2, 9, 0, 7, 1, 8, 3, 6}, n = 8;
	int target = 15;
	vector<int>ans;
	int i, j;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			if(arr[i] + arr[j] == target)
			{
				ans.push_back(i);
				ans.push_back(j);
			}
		}
	}
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}

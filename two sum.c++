#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[] = {3, 7, 5, 0, 1, 9, 6, 8}, n = 8;
	int target = 14;
	int i;
	int j;
	vector<int>ans;
	for(i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
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

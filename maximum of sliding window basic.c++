#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
	int arr[] = {3, 1, 6, -1, 0, 6}, n = 6;
	vector<int>res;
	deque<int>dq;
	int k;
	k = 3;
	int i;
	for(i = 0; i < k; i++){
		while(dq.size() > 0 && arr[dq.back()] <= arr[i]){
			dq.pop_back();
		}
		dq.push_back(i);
	}
	for( i = k; i < n; i++){
		res.push_back(arr[dq.front()]);
		while(dq.size() > 0 && dq.front() <= i-k){
			dq.pop_front();
		}
		while(dq.size() > 0 && arr[dq.back()] <= arr[i]){
			dq.pop_back();
		}
		dq.push_back(i);
	}
	res.push_back(arr[dq.front()]);
	for(int x : res){
		cout<< x << endl;
	}
	return 0;
}

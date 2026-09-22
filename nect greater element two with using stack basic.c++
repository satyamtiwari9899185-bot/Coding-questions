#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int arr[] = {4, 8, 6, 1, 9, 3, 5, 2}, n = 8;
	vector<int>ans(n, 0);
	stack<int>s;
	int i;
	for(i = 2*n-1; i >= 0; i--){
		while(s.size() > 0 && arr[s.top()] <= arr[i % n]){
			s.pop();
		}
		if(s.empty())
		{
			ans[i % n] = -1;
		}else{
			ans[i % n] = arr[s.top()];
		}
		s.push(i % n);
	}
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}

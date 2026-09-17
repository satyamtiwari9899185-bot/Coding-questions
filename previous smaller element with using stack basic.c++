#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	vector<int>arr = {3, 0, 1, 8, 6};
	int n;
	n = arr.size();
	vector<int>ans(n, 0);
	stack<int>s;
	int i;
	for(i = 0; i < n; i++){
		while(s.size() > 0 && s.top() >= arr[i]){
			s.pop();
		}
		if(s.empty())
		{
			ans[i] = -1;
		}else{
			ans[i] = s.top();
		}
		s.push(arr[i]);
	}
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}

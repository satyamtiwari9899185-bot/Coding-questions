#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	vector<int>vec = {6, 8, 0, 1, 3};
	int n;
	n = vec.size();
	stack<int>s;
	vector<int>ans(n, 0);
	int i;
	for(i = n-1; i >= 0; i--){
		while(s.size() > 0 && s.top() <= vec[i]){
			s.pop();
		}
		if(s.empty())
		{
			ans[i] = -1;
		}else{
			ans[i] = s.top();
		}
		s.push(vec[i]);
	}
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}

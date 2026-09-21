#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int arr[] = {2, 1, 5, 6, 2, 3}, n = 6;
	int width;
	int currArea;
	stack<int>s;
	vector<int>right(n, 0);
	vector<int>left(n, 0);
	int i;
	for(i = n-1; i >=0; i--){
		while(s.size() > 0 && arr[s.top()] >= arr[i]){
			s.pop();
		}
		if(s.empty())
		{
			right[i] = n;
		}else{
			right[i] = s.top();
		}
		s.push(i);
	}
	while(s.empty()){
		s.pop();
	}
	for(i = 0; i < n; i++){
		while(s.size() > 0 && arr[s.top()] >= arr[i]){
			s.pop();
		}
		if(s.empty())
		{
			left[i] = -1;
		}else{
			left[i] = s.top();
		}
		s.push(i);
	}
	int ans = 0;
	for(i = 0; i < n; i++){
		width = right[i] - left[i] + 1;
		currArea = arr[i] * width;
		ans = max(ans, currArea);
	}
	cout<< ans << endl;
	return 0;
}

#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
int main(){
	vector<int>nums1 = {4, 1, 2};
	vector<int>nums2 = {1, 3, 4, 2};
	int n, m;
	n = nums1.size();
	m = nums2.size();
	unordered_map<int, int>mp;
	stack<int>s;
	vector<int>ans(n, 0);
	int i;
	for(i = m-1; i >= 0; i--){
		while(s.size() > 0 && s.top() <= nums2[i]){
			s.pop();
		}
		if(s.empty())
		{
		    mp[nums2[i]] = -1;
		}else{
			mp[nums2[i]] = s.top();
		}
		s.push(nums2[i]);
	}
	for(i = n-1; i >= 0; i--){
		ans[i] = mp[nums2[i]];
	}
	for(int x : ans){
	    cout<< x << endl;
    }
	return 0;
}

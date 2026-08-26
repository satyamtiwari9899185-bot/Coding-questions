#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int arr[] = {3, 4, 9, 5, 0, 6, 1, 8}, n = 8;
	int st = 0;
	int end = n-1;
	int i;
	int sum;
	vector<int>ans;
	int key = 5;
	sort(arr, arr + n);
	while(st < end){
		sum = arr[st] + arr[end];
		if(sum == key)
		{
			ans.push_back(st);
			ans.push_back(end);
			st++;
			end--;
		}else if(sum < key){
			st++;
		}else{
		    end--;
	    }
	}
	for(int x : ans){
		cout<< " pair of sum are = " << x << endl;
	}
	return 0;
}

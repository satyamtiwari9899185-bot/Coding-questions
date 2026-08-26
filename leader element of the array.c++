#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[] = {4, 7, 2, 6, 9, 3}, n = 6;
	int maxi = arr[n-1];
	vector<int>leader;
	leader.push_back(arr[n-1]);
	int i;
	for(i = n-2; i >= 0; i--){
		if(arr[i] > maxi)
		{
			maxi = arr[i];
			leader.push_back(arr[i]);
		}
	}
	for(int x : leader){
		cout<< " leader of the array are = " << x << endl;
	}
	return 0;
}

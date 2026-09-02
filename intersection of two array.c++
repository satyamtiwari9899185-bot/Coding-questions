#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr1[] = {3, 8, 1, 0, 6}, arr2[] = {4, 9, 8, 2, 6}, n1 = 5, n2 = 5;
	int i;
	int j;
	int first;
	int second;
	vector<int>ans;
	for(i = 0; i < n1; i++){
		first = arr1[i];
		for(j = 0; j < n2; j++){
			second = arr2[j];
			if(first == second)
			{
				ans.push_back(arr2[j]);
			}
		}
	}
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}

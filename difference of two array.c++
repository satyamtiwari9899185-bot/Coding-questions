#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr1[] = {3, 8, 1, 0, 4}, arr2[] = {5, 9, 2, 7, 6}, n1 = 5, n2 = 5;
	int i;
	int j;
	int first;
	int second;
	int difference;
	vector<int>ans;
	for(i = 0; i < n1; i++){
		first = arr1[i];
		for(j = 0; j < n2; j++){
			second = arr2[j];
			difference = second - first;
			ans.push_back(difference);
		}
	}
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}

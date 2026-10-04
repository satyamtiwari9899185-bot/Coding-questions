#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, 8, 3, 0, -1, 6}, n = 6;
	int currSum;
	int maxSum = INT_MIN;
	int i, j;
	for(i = 0; i < n; i++){
		currSum = 0;
		for(j = i; j < n; j++){
			currSum = currSum + arr[j];
			maxSum = max(maxSum, currSum);
		}
	}
	cout<< maxSum << endl;
	return 0;
}

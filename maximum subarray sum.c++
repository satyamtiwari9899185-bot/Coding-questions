#include<iostream>
using namespace std;
int main(){
	int n, arr[n], i;
	cout<< " enter the number are = ";
	cin>> n;
	for(i = 0; i < n; i++){
		cin>> arr[i];
	}
	int currSum = 0;
	int maxSum = 0;
	for(i = 0; i < n; i++){
		currSum = currSum + arr[i];
		maxSum = max(maxSum, currSum);
		if(currSum < 0)
		{
			currSum = 0;
		}
	}
	cout<< " maximum subarray sum are = " << maxSum << endl;
	return 0;
}

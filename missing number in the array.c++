#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 4, 0, 5}, n = 5;
	int totalSum = n * (n + 1) / 2;
	int i;
	int sum = 0;
	int result;
	for(i = 0; i < n; i++){
		sum = sum + arr[i];
	}
	result = totalSum - sum;
	cout<< " missing number in an array are = " << result << endl;
	return 0;
}

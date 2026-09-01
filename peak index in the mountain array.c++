#include<iostream>
using namespace std;
int main(){
	int arr[] = { 0, 3, 8, 9, 5, 2, 1}, n = 7;
	int st = 1;
	int end = n-2;
	int mid;
	while(st < end){
		mid = st + (end - st) / 2;
		if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])
		{
			cout<< mid;
			break;
		}else if (arr[mid] > arr[mid-1]){
			st = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	return 0;
}

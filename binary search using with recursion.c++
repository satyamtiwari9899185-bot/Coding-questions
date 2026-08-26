#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target, int st, int end){
    int mid;
	while(st <= end){
		mid = st + (end - st) / 2;
		if(arr[mid] == target)
		{
			return mid;
		}else if(arr[mid] < target){
			BinarySearch(arr, n, target, mid+1, end);
		}else{
			BinarySearch(arr, n, target, st, mid-1);
		}
	}
	return -1;
}







int main(){
	int arr[] = {5, 9, 0, 3, 7, 2, 4}, n = 7, target = 9;
	int st = 0;
	int end = n-1;
	cout<< BinarySearch(arr, n, target, st, end) << endl;
	return 0;
}

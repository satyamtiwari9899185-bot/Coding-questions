#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[], int n, int target){
    int st = 0;
	int end = n-1;
	int mid;
	while(st <= end){
		mid = st + (end - st) / 2;
		if(arr[mid] == target)
		{
			return mid;
		}else if(arr[mid] < target){
			st = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	return -1;
}







int main(){
	int arr[] = {6, 2, 3, 0, 9, 8}, n = 6, target = 2;
	sort(arr, arr + n);
	cout<< binarySearch(arr, n, target) << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int arr[] = {3, 4, 5, 6, 7, 0, 1, 2}, n = 8;
	int st = 0;
	int end = n-1;
	int mid;
	int target = 7;
	while(st <= end){
		mid = st + (end - st) / 2;
		if(arr[mid] == target)
		{
		    cout<< mid;
	    }
		if(arr[st] <= arr[mid])
		{
			if(arr[st] <= target && target <= arr[mid])
			{
				end = mid-1;
			}else{
				st = mid+1;
			}
		}else{
			if(arr[mid] <= target && target<= arr[end])
			{
				st = mid+1;
			}else{
				end = mid-1;
			}
		}
	}
	return 0;
}

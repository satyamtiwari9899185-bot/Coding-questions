#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[] = { 2, 1, 1, 2, 3, 4, 4, 8, 8}, n = 9;
	int st = 0;
	int end = n-1;
	int mid;
	sort(arr, arr + n);
	if(n == 1)
	{
	    cout<< " 0 ";
    }
	while(st < end){
		mid = st + (end - st) / 2;
		if(mid == 0 && arr[mid]!=arr[mid+1])
		{
		    cout<< mid;
	    }
	    if(mid == n-1 && arr[mid]!=arr[mid-1])
	    {
	        cout<< mid;
	    }
		if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1])
		{
			cout<< mid;
		}
		if(mid % 2 == 0)
		{
			if(arr[mid-1] == arr[mid])
			{
				end = mid - 1;
			}else{
				st = mid + 1;
			}
		}else{
			if(arr[mid-1] == arr[mid])
			{
				st = mid + 1;
			}else{
				end = mid - 1;
			}
		}
	}
	return 0;
}

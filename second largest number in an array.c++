#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[] = {2, 7, 0, 4, 8, 1, 9}, n = 7;
	int maxi = arr[n-1];
	int i;
	sort(arr, arr + n);
	for(i = n-2; i >= 0; i--){
		if(arr[i] < maxi)
		{
			maxi = arr[i];
			break;
		}
	}
	cout<< " second largest number of an array are = " << maxi << endl;
	return 0;
}

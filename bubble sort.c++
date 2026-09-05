#include<iostream>
using namespace std;
int main(){
	int arr[] = {3, 7, 2, 0, 9, 6}, n = 6;
	int i;
	int j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
			}
		}
	}
	for(i = 0; i < n; i++){
		cout<< arr[i] << endl;
	}
	return 0;
}

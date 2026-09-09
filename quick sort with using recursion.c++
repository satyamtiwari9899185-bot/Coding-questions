#include<iostream>
using namespace std;
int partition(int arr[], int st, int end){
	int idx;
	int pivot = arr[end];
	idx = st-1;
	int j;
	for(j = st; j < end; j++){
		if(arr[j] <= pivot)
		{
		    idx++;
			swap(arr[j], arr[idx]);
		}
	}
	idx++;
	swap(arr[end], arr[idx]);
	return idx;
}







void quickSort(int arr[], int st, int end){
	if(st < end)
	{
		int pivIdx;
		pivIdx = partition(arr, st, end);
		quickSort(arr, st, pivIdx-1);
		quickSort(arr, pivIdx+1, end);
	}
}







int main(){
	int arr[] = {2, 7, 5, 0, 1, 6}, n = 6;
	int st = 0;
	int end = n-1;
	int i;
	quickSort(arr, st, end);
	for(i = 0; i < n; i++){
		cout<< arr[i] << endl;
    }
	return 0;
}

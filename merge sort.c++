#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[], int st, int end, int mid){
	int i = st;
	int j = mid+1;
	vector<int>temp;
	while(i <= mid && j <= end){
		if(arr[i] <= arr[j])
		{
			temp.push_back(arr[i]);
			i++;
		}else{
			temp.push_back(arr[j]);
			j++;
		}
	}
	while(i <= mid){
		temp.push_back(arr[i]);
		i++;
	}
	while(j <= end){
		temp.push_back(arr[j]);
		j++;
	}
	int idx;
	int m;
	m = temp.size();
	for(idx = 0; idx < m; idx++){
		arr[idx+st] = temp[idx];
	}
}







void mergeSort(int arr[], int st, int end){
    if(st < end){
	    int mid;
	    mid = st + (end - st) / 2;
	    mergeSort(arr, st, mid);
	    mergeSort(arr, mid+1, end);
	    merge(arr, st, end, mid);
    }
}







int main(){
	int arr[] = {6, 4, 1, 0, 8, 5, 9, 2}, n = 8;
	int st = 0;
	int end = n-1;
	int i;
	mergeSort(arr, st, end);
	for(i = 0; i < n; i++){
	    cout<< arr[i] << endl;
    }
	return 0;
}

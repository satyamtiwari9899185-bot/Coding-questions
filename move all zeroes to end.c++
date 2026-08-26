#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 6, 0, 4, 8, 0, 2}, n = 7;
	int i;
	int index = 0;
	for(i = 0; i < n; i++){
        if(arr[i]!=0)
        {
        	arr[index] = arr[i];
        	index++;
		}
	}
	for(i = index; i < n; i++){
		arr[index] = 0;
		index++;
	}
	for(i = 0; i < n; i++){
	    cout<< arr[i] << endl;
    }
	return 0;
}

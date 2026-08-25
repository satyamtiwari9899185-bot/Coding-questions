#include<iostream>
using namespace std;
int main(){
	int arr[] = {4, 7, 2, 1, 8}, n = 5;
	int smallest = INT_MAX;
	int largest = INT_MIN;
	int i;
	for(i = 0; i < n; i++){
		if(arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	for(i = 0; i < n; i++){
		if(arr[i] < smallest)
		{
			smallest = arr[i];
		}
	}
	cout<< " largest number of an array are = " << largest << endl;
	cout<< " smallest number of an array are = " << smallest << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n, arr[n];
	cout<< " enter the number are = ";
	cin>> n;
	int i;
	for(i = 0; i < n; i++){
		cin>> arr[i];
	}
	int st = 0, end = n-1;
	while(st < end){
		swap(arr[st], arr[end]);
		st++;
		end--;
	}
	for(i = 0; i < n; i++){
		cout<< arr[i] << endl;
	}
	return 0;
}

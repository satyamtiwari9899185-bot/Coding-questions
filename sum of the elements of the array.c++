#include<iostream>
using namespace std;
int main(){
	int n, arr[n], i;
	cout<< " enter the number are = ";
	cin>> n;
	for(i = 0; i < n; i++){
		cin>> arr[i];
	}
	int sum = 0;
	for(i = 0; i < n; i++){
		sum = sum + arr[i];
	}
	cout<< " sum of the elments of an array are = " << sum << endl;
	return 0;
}

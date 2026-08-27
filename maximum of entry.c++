#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int e[n], l[n];
	int i;
	for(i = 0; i < n; i++){
		cin>> e[i];
	}
	for(i = 0; i < n; i++){
		cin>> l[i];
	}
	int sum = 0;
	int maxi = 0;
	for(i = 0; i < n; i++){
		sum = sum + e[i] - l[i];
		maxi = max(maxi, sum);
	}
	cout<< " maximum of entry are = " << maxi << endl;
	return 0;
}

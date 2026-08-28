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
	int product = 1;
	for(i = 0; i < n; i++){
		product = product * arr[i];
	}
	cout<< " product of a number are = " << product << endl;
	return 0;
}

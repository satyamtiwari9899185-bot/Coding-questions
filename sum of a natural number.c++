#include<iostream>
using namespace std;
int main(){
	int n, i, sum = 0;
	cout<< " enter the number are = ";
	cin>> n;
	for(i = 1; i <= n; i++){
		sum = sum + i;
	}
	cout<< " sum are = " << sum << endl;
	return 0;
}

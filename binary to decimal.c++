#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int i;
	int digit;
	int e =  0;
	int sum = 0;
	while(n > 0){
	    digit = n % 10;
		sum = sum + digit * pow(2, e);
		n = n / 10;
		e++;
	}
	cout<< " binary to decimal are = " << sum << endl;
	return 0;
}

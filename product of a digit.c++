#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int digit;
	int product = 1;
	while(n > 0){
		digit = n % 10;
		product = product * digit;
		n = n / 10;
	}
	cout<< " product of a digit are = " << product << endl;
	return 0;
}

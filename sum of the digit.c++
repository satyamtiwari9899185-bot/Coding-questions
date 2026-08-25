#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int lastDigit;
	int sum = 0;
	while(n > 0){
		lastDigit = n % 10;
		sum = sum + lastDigit;
		n = n / 10;
	}
	cout<< " sum of a digit are = " << sum << endl;
	return 0;
}

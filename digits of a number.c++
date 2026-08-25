#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int digit;
	while(n > 0){
		digit = n % 10;
		cout<< " digits are = " << digit << endl;
		n = n / 10;
	}
	return 0;
}

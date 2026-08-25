#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int rev = 0;
	int rem = 0;
	while(n > 0){
		int rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	cout<< " reverse of a number are = " << rev << endl;
	return 0;
}

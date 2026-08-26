#include<iostream>
using namespace std;
int main(){
	int base, exponent;
	int ans = 1;
	cout<< " enter the number are = ";
	cin>> base >> exponent;
	while(exponent!=0){
		ans = ans * base;
		exponent--;
	}
	cout<< " power of a number are = " << ans << endl;
	return 0;
}

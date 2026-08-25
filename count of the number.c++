#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int digits;
	int count = 0;
	while(n > 0){
		digits = n % 10;
		count++;
		n = n / 10;
	}
	cout<< " count of a number are = " << count << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int a = 0;
	int b = 1;
	int c;
	int i;
	cout<< " fibonacci series of a number are = ";
	cout<< a << endl;
	cout<< b << endl;
	for(i =  0; i < n; i++){
		c = a + b;
		cout<< c << endl;
		a = b;
		b = c;
	}
	return 0;
}

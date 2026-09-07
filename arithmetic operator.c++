#include<iostream>
using namespace std;
int main(){
	int a, b, sum, subtract, multiply, divide, modulus;
	cout<< " enter the number are = ";
	cin>> a >> b;
	sum = a + b;
	subtract = a - b;
	multiply = a * b;
	divide = a / b;
	modulus = a % b;
	cout<< " the sum are = " << sum << endl;
	cout<< " the subtract are = " << subtract << endl;
	cout<< " the multilpy are = " << multiply << endl;
	cout<< " the divide are = " << divide << endl;
	cout<< " the modulus are = " << modulus << endl;
	return 0;
}

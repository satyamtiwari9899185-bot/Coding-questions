#include<iostream>
using namespace std;
int main(){
	int p, r, t, a, ci;
	cout<< " enter the number are = ";
	cin>> p >> r >> t;
	a = p * (1 + (r/100))^t;
	ci = a - p;
	cout<< " compound interest of a number are = " << ci << endl;
	return 0;
}

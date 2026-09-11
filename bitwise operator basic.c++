#include<iostream>
using namespace std;
int main(){
	int a, b = 10;
	cout<< " enter the number are = ";
	cin>> a;
	cout<< (a & b) << endl;
	cout<< (a | b) << endl;
	cout<< (a << b) << endl;
	cout<< (a >> b) << endl;
	return 0;
}

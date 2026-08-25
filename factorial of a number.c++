#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int fact = 1;
	int i;
	for(i = 1; i <= n; i++){
		fact = fact * i;
	}
	cout<< " factoerial of a number are = " << fact << endl;
	return 0;
}

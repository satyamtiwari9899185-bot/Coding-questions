#include<iostream>
using namespace std;
int main(){
	int n1 = 20, n2 = 28;
	int i;
	int gcd;
	for(i = min(n1, n2); i >= 1; i--){
		if(n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
			break;
		}
	}
	cout<< " gcd of a number are = " << gcd << endl;
	return 0;
}

#include<iostream>
using namespace std;
int GCD(int n1, int n2){
	int result, i;
	for(i = min(n1, n2); i >= 1; i--){
		if(n1 % i == 0 && n2 % i == 0)
		{
			result = i;
			break;
		}
	}
	return result;
}







int main(){
	int n1, n2, gcd, lcm;
	cout<< " enter the number are = ";
	cin>> n1 >> n2;
	gcd = GCD(n1, n2);
	lcm = (n1 * n2) / gcd;
	cout << " lcm of a number are = " << lcm << endl;
	return 0;
}

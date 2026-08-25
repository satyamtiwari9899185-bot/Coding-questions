#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int copyN = n;
	int rem = 0;
	int rev = 0;
	while(n > 0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	if(copyN == rev)
	{
		cout<< " it is a palindrostrme number ";
	}else{
		cout<< " it is not a palindrome number ";
	}
	return 0;
}

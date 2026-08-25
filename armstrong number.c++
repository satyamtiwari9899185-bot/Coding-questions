#include<iostream>
#include<cmath>
using namespace std;
int lengthNumber(int n){
    int len = 0;
    while(n > 0){
        n = n / 10;
        len++;
    }
    return len;
}







int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int power = lengthNumber(n);
	int copyofN = n;
	int digit;
	int armSum = 0;
	while(n > 0){
		digit = n % 10;
		armSum = armSum + pow(digit, power);
		n = n / 10;
	}
	if(copyofN == armSum)
	{
		cout<< " it is an armstrong number ";
	}else{
		cout<< " it is not an armstrong number ";
	}
	return 0;
}

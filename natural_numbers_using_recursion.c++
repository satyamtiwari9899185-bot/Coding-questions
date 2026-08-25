#include<iostream>
using namespace std;
int printNumber(int n){
	if(n == 1)
	{
		return 1;
	}
	cout<< n << endl;
	return printNumber(n-1);
}







int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	cout<< printNumber(n) << endl;
	return 0;
}

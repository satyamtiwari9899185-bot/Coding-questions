#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	if(n % 400 == 0 || (n % 100!= 0 && n % 4 == 0))
	{
		cout<< " it is a leap year " << endl;
	}else{
		cout<< " it is not a leap year " << endl;
	}
	return 0;
}

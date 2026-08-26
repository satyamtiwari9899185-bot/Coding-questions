#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<< " enter the number are = ";
	cin>> a >> b >> c;
	if(a > b && a > c)
	{
		cout<< " A is greater ";
	}else if(b > c && b > a){
		cout<< " B is greater ";
	}else{
		cout<< " C is greater ";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int a = 5, b = 10, c = 15;
	if(a > b && a > c)
	{
		cout<< " A is greater ";
	}else if(b > c || b > a){
		cout<< " B is greater ";
	}else{
		cout<< " C is greater ";
	}
	cout<< (!a) << endl;
	cout<< (!b) << endl;
	cout<< (!c) << endl;
	return 0;
}

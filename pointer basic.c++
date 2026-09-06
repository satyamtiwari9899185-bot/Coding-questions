#include<iostream>
using namespace std;
int main(){
	int a = 20;
	int* ptr = &a;
	cout<< a << endl;
	cout<< *ptr << endl;
	cout<< ptr << endl;
	cout<< &a << endl;
	int** ptr2 = &ptr;
	cout<< *ptr2 << endl;
	cout<< ptr << endl;
	cout<< ptr2 << endl;
	cout<< &ptr << endl;
	return 0;
}

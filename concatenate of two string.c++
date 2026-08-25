#include<iostream>
using namespace std;
int main(){
	string s1, s2, result;
	cout<< " enter the string are = ";
	getline(cin, s1);
	getline(cin, s2);
	result = s1 + s2;
	cout<< " concatenate of two strings are = " << result << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	string s;
	cout<< " enter the string are = ";
	getline(cin, s);
	int n = s.length();
	int st = 0;
	int end = n-1;
	while(st < end){
		swap(s[st], s[end]);
		st++;
		end--;
	}
	cout<< " reverse of a string are = " << s << endl;
	return 0;
}

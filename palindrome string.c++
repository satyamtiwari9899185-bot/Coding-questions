#include<iostream>
using namespace std;
int main(){
	string s;
	cout<< " enter the string are = ";
	getline(cin, s);
	int n = s.length();
	string copyofS;
	copyofS = s;
	int st = 0;
	int end = n-1;
	while(st < end){
		swap(s[st], s[end]);
		st++;
		end--;
	}
	string rev;
	rev = s;
	if(copyofS == rev)
	{
		cout<< " it is a palindrome string ";
	}else{
		cout<< " it is not a palindrome string ";
	}
	return 0;
}

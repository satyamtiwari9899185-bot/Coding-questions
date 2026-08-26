#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<< " enter the character are = ";
	cin>> ch;
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		cout<< " it is a vowel ";
	}else{
		cout<< " it is a consonant ";
	}
	return 0;
}

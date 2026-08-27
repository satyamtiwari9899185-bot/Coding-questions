#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int i;
	cout<< " enter the string are = ";
	getline(cin, s);
	int count = 0;
	for(i = 0; i < s.length(); i++){
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			count++;
		}
	}
	cout<< " count of vowel are = " << count << endl;
	return 0;
}

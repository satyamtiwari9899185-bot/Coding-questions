#include<iostream>
using namespace std;
int main(){
	string s;
	cout<< " enter the string are = ";
	getline(cin, s);
	int i;
	for(i = 0; i < s.length(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i] - 32;
		}else if(s[i] == ' '){
			continue;
		}
	}
	cout<< " toggle case are = " << s << endl;
	return 0;
}

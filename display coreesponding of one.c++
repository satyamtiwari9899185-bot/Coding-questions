#include<iostream>
using namespace std;
int main(){
	string n1, n2;
	cout<< " enter the string are = ";
	getline(cin, n1);
	getline(cin, n2);
	int i;
	for(i = 0; i < n1.length(); i++){
		if(n2[i] == '1')
		{
			cout<< n1[i] << endl;
		}
	}
	return 0;
}

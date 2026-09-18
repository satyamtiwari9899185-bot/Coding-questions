#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string, int>mp;
	mp["laptop"] = 100;
	mp["refrigerator"] = 200;
	mp["computer"] = 500;
	mp["washing machine"] = 900;
	mp["t.v."] = 600;
	mp["mobile"] = 400;
	for(auto x : mp){
		cout<< x.first << endl;
		cout<< x.second << endl;
	}
	// mp.insert("gas", 300);
	for(auto x : mp){
		cout<< x.first << endl;
		cout<< x.second << endl;
	}
	return 0;
}

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	unordered_map<string, int>mp;
	mp["computer"] = 100;
	mp["refrigerator"] = 200;
	mp["laptop"] = 900;
	mp["t.v."] = 400;
	mp["cooler"] = 600;
	mp["cooler"] = 800;
	for(auto x : mp){
		cout<< x.first << endl;
		cout<< x.second << endl;
	}
	mp["a.c."] = 300;
	mp["laptop"] = 700;
	for(auto x : mp){
		cout<< x.first << endl;
		cout<< x.second << endl;
	}
	return 0;
}

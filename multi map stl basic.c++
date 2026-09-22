#include<iostream>
#include<map>
using namespace std;
int main(){
	multimap<string, int>mp;
	mp.insert({"laptop", 100});
	mp.insert({"cooler", 600});
	mp.insert({"refrigerator", 300});
	mp.insert({"t.v.", 900});
	mp.insert({"computer", 500});
	mp.emplace("cooler", 800);
	for(auto x : mp){
		cout<< x.first << endl;
		cout<< x.second << endl;
	}
	mp.insert({"computer", 300});
	mp.insert({"mobile", 400});
	for(auto x : mp){
		cout<< x.first << endl;
		cout<< x.second << endl;
	}
	return 0;
}

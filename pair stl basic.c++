#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<pair<int, int>>p;
	p.push_back({1, 2});
	p.push_back({3, 8});
	p.push_back({5, 9});
	p.pop_back();
	for(auto x : p){
		cout<< x.first << endl;
		cout<< x.second << endl;
	}
	p.emplace_back(4, 9);
	vector<pair<int, int>>vec = {{1, 2}, {4, 8}, {5, 9}, {3, 2}};
	for(auto x : vec){
		cout<< x.first << endl;
		cout<< x.second << endl;
	}
	return 0;
}

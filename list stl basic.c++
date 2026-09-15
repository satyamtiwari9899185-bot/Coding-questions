#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int>l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_front(4);
	for(int x : l){
		cout<< x << endl;
	}
	l.pop_back();
	l.pop_front();
	cout<< " front = " << l.front() << endl;
	cout<< " size = " << l.size() << endl;
	cout<< " back = " << l.back() << endl;
	return 0;
}

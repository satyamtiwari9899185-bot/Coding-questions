#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int>l;
	l.push_front(1);
	l.push_front(2);
	l.push_front(3);
	l.push_back(4);
	l.pop_front();
	l.pop_back();
	while(!l.empty()){
		cout<< l.front() << " -> ";
		l.pop_front();
	}
	cout<< " NULL " << endl;
	return 0;
}

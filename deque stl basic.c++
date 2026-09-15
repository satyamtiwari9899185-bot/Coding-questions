#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int>dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	dq.push_front(4);
	for(int x : dq){
		cout<< x << endl;
	}
	dq.pop_back();
	dq.pop_front();
	cout<< " front = " << dq.front() << endl;
	cout<< " size = " << dq.size() << endl;
	cout<< " back = " << dq.back() << endl;
	dq[1] = 8;
	for(int x : dq){
		cout<< x << endl;
	}
	return 0;
}

#include<iostream>
#include<deque>
using namespace std;
class Queue{
	deque<int>q;
public:
	void push(int val){
		q.push_back(val);
	}
	void pop(){
		q.pop_front();
	}
	int front(){
		return q.front();
	}
	bool empty(){
		return q.empty();
	}
};







int main(){
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.pop();
	while(!q.empty()){
		cout<< q.front() << endl;
		q.pop();
	}
	return 0;
}

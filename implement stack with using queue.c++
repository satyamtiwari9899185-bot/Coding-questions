#include<iostream>
#include<queue>
using namespace std;
class Queue{
public:
	int data;
	queue<int>q1;
	queue<int>q2;
	void push(int data){
		while(!q1.empty()){
			q2.push(q1.front());
			q1.pop();
		}
		q1.push(data);
		while(!q2.empty()){
			q1.push(q2.front());
			q2.pop();
		}
	}
	int pop(){
	    q1.pop();
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        return q1.empty();
    }
};







int main(){
	Queue q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.pop();
	cout<< q1.top() << endl;
	cout<< q1.empty() << endl;
	while(!q1.empty()){
	    cout<< q1.top() << endl;
	    q1.pop();
    }
	return 0;
}

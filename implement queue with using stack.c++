#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
	stack<int>s1;
	stack<int>s2;
	void push(int data){
		while(!s1.empty()){
			s2.push(s1.top());
		    s1.pop();
		}
		s1.push(data);
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
	}
	void pop(){
		s1.pop();
	}
	int front(){
		return s1.top();
	}
	bool empty(){
		return s1.empty();
	}
};







int main(){
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.pop();
	cout<< s1.front() << endl;
	cout<< s1.empty() << endl;
	while(!s1.empty()){
	    cout<< s1.front() << endl;
	    s1.pop();
    }
	return 0;
}

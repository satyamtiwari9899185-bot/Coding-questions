#include<iostream>
#include<vector>
using namespace std;
class Stack{
	vector<int>vec;
public:
	int data;
	void push(int val){
		vec.push_back(val);
	}
	void pop(){
	    vec.pop_back();
    }
    int top(){
	    return vec.back();
    }
    bool empty(){
        vec.empty();
    }
};







int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.pop();
	while(!s.empty()){
	    cout<< s.top() << endl;
	    s.pop();
    }
	return 0;
}

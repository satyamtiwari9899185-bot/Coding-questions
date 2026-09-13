#include<iostream>
using namespace std;
class Circular_queue{
public:
	int* Arr;
	int cap;
	int currSize;
	int f;
	int r;
	Circular_queue(int size){
	    cap = size;
		Arr = new int[cap];
		currSize = 0;
		f = 0;
		r = -1;
	}
	void push(int data){
		if(currSize == cap)
		{
			cout<< " circular queue is full " << endl;
		}else{
			r = (r+1)%cap;
			Arr[r] = data;
			currSize++;
		}
	}
	void pop(){
	    if(currSize == 0){
	        cout<< " circular queue is empty " << endl;
	    }else{
	        f = (f+1)%cap;
	        currSize--;
	    }
    }
    int front(){
        return Arr[f];
    }
    bool empty(){
        return currSize == 0;
    }    
};







int main(){
	Circular_queue cq(6);
	cq.push(1);
	cq.push(2);
	cq.push(3);
	cq.pop();
	cout<< cq.front() << endl;
	cout<< cq.empty() << endl;
	while(!cq.empty()){
	    cout<< cq.front() << endl;
	    cq.pop();
    }
	return 0;
}

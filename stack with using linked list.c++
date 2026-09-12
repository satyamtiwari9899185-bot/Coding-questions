#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;
	}
};
class Stack{
public:
	Node* head;
	Node* tail;
	Stack(){
		head = tail = NULL;
	}
	void push(int val){
		Node* newNode = new Node(val);
		if(head == NULL){
			head = tail = newNode;
		}else{
			// tail->next = newNode;
			// tail = newNode;
			Node* temp = head;
			while(temp->next!=NULL){
			    temp = temp->next;
		    }
		    temp->next = newNode;
		    tail = newNode;
		}
	}
	void pop(){
	    if(head == NULL){
	        cout<< " stack is empty ";
	        return;
	    }else if(head == tail){
	        delete tail;
	        head = tail = NULL;
	    }else{
	        Node* temp = head;
	        while(temp->next!=tail){
	            temp = temp->next;
	        }
	        temp->next = NULL;
	        delete tail;
	        tail = temp;
	    }
    }
    int top(){
        if(head == NULL){
           cout<< " stack is empty ";
        }else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            return temp->data;
        }
    }
    bool isEmpty(){
        return head == NULL;
    }
};







int main(){
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	cout<< s.top() << endl;
	cout<< s.isEmpty() << endl;
	while(!s.isEmpty()){
	    cout<< s.top() << endl;
	    s.pop();
    }
	return 0;
}

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
class Queue{
public:
	Node* head;
	Node* tail;
	Queue(){
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
	        cout<< " queue is empty ";
	    }else if(head == tail){
	        delete head;
	        head = tail = NULL;
	    }else{
	        Node* temp = head;
	        head = head->next;
	        delete temp;
	    }
    }
	    int front(){
	        if(head == NULL){
	            cout<< " queue is empty ";
	        }else{
	            return head->data;
	        }
	    }
	    bool isEmpty(){
	        return head == NULL;
	    }
};







int main(){
	Queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.pop();
	cout<< q.front() << endl;
	cout<< q.isEmpty() << endl;
	while(!q.isEmpty()){
	    cout<< q.front() << endl;
	    q.pop();
    }
	return 0;
}

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
class List{
public:
	Node* head;
	Node* tail;
	List(){
		head = tail = NULL;
	}
	void push_front(int val){
		Node* newNode = new Node(val);
		if(head == NULL)
		{
			head = tail = newNode;
		}else{
			newNode->next = head;
			head = newNode;
		}
	}
	void printLL(){
	    Node* temp = head;
	    while(temp!=NULL){
	        cout<< temp->data << " -> ";
	        temp = temp->next;
	    }
	    cout<< " NULL " << endl;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = NULL;
        }else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            tail = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout<< " Linked List is empty " << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            cout<< " Linked List is empty " << endl;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void insert(int val, int pos){
        Node* newNode = new Node(val);
        if(head == NULL){
            push_front(val);
        }
        Node* temp = head;
        int i;
        for(i = 0; i < pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    int search(int key){
        Node* temp = head;
        int idx = 0;
        if(temp->data == key){
            return idx;
        }
        temp = temp->next;
        idx++;
    }
};







int main(){
	List ll;
	ll.push_front(1);
	ll.push_front(2);
	ll.push_front(3);
	ll.push_back(4);
	ll.pop_front();
	ll.pop_back();
	ll.insert(4, 1);
	cout<< ll.search(1);
	ll.printLL();
	return 0;
}

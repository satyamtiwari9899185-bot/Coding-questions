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
class circularList{
public:
	Node* head;
	Node* tail;
	circularList(){
		head = tail = NULL;
	}
	void insertAtHead(int val){
		Node* newNode = new Node(val);
		if(head == NULL)
		{
			head = tail = newNode;
			tail->next = newNode;
		}else{
			newNode->next = head;
			head = newNode;
			tail->next = head;
		}
	}
	void printCLL(){
	    cout<< head->data << " -> ";
	    Node* temp = head->next;
	    while(temp!=head){
	        cout<< temp->data << " -> ";
	        temp = temp->next;
	    }
	    cout<< temp->data << " -> ";
    }
    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
             head = tail = newNode;
             tail->next = head;
        }
        Node* temp = head;
        while(temp!=tail){
            temp = temp->next;
        }
        temp->next = newNode;
        tail = newNode;
        tail->next = head;
    }
    void deleteAtHead(){
        if(head == NULL){
            cout<< " Circular Linked List is empty " << endl;
        }else if(head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void deleteAtTail(){
        if(head == NULL){
            cout<< " Circular Linked List is empty " << endl;
        }else if(head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
          //Node* prev = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
          //tail = tail->prev;
          //tail->next = head;
          //prev->next = NULL;
          //delete temp;
            temp->next = head;
            delete tail;
            tail = temp;
        }
    }
};







int main(){
	circularList cll;
	cll.insertAtHead(1);
	cll.insertAtHead(2);
	cll.insertAtHead(3);
	cll.insertAtTail(4);
	cll.deleteAtHead();
	cll.deleteAtTail();
	cll.printCLL();
	return 0;
}

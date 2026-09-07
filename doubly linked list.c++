#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node* prev;
	Node(int val){
		data = val;
		next = prev = NULL;
	}
};
class DoublyList{
public:
	Node* head;
	Node* tail;
	DoublyList(){
		head = tail = NULL;
	}
	void push_front(int val){
		Node* newNode = new Node(val);
		if(head == NULL)
		{
			head = tail = newNode;
		}else{
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
		}
	}
	void printDLL(){
	    Node* temp = head;
	    while(temp!=NULL){
	        cout<< temp->data << " <-> ";
	        temp = temp->next;
	    }
	    cout<< " NULL ";
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = NULL;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout<< " DLL is empty " << endl;
        }else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            head->prev = NULL;
            delete temp;
        }
    }
    void pop_back(){
        if(head == NULL){
            cout<< " DLL is empty " << endl;
        }else{
            Node* temp = head;
            while(temp->next->next!=NULL){
                temp = temp->next;
            }
            temp->next = NULL;
            tail->prev = NULL;
            delete tail;
            tail = temp;
        }
    }
};







int main(){
	DoublyList dll;
	dll.push_front(1);
	dll.push_front(2);
	dll.push_front(3);
	dll.push_back(4);
	dll.pop_front();
	dll.pop_back();
	dll.printDLL();
	return 0;
}

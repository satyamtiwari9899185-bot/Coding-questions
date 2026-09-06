#include<iostream>
#include<unordered_map>
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
    Node* newHead;
    Node* newTail;
	List(){
		head = tail = NULL;
	}
	void push_front(int val){
		Node* newNode = new Node(val);
		if(head == NULL){
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
	    cout<< " NULL ";
	    cout<< endl;
    }
    void copyNode(){
        unordered_map<Node*, Node*>mp;
        if(head == NULL){
            newHead = newTail = NULL;
        }
		newHead = new Node(head->data);
		newTail = newHead;
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        mp[newHead] = head;
        while(oldTemp!=NULL){
        Node* copyNode = new Node(oldTemp->data);
            newTail->next = copyNode;
            newTail = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
    }
    void printLLCopyNode(){
        Node* temp = newHead;
        while(temp!=NULL){
            cout<< temp->data << " -> ";
            temp = temp->next;
        }
        cout<< " NULL ";
    }
};







int main(){
	List ll;
	ll.push_front(1);
	ll.push_front(2);
	ll.push_front(3);
	ll.printLL();
	ll.copyNode();
	ll.printLLCopyNode();
	return 0;
}

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
    void middle_node(){
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<< slow->data;
    }
};







int main(){
	List ll;
	ll.push_front(1);
	ll.push_front(2);
	ll.push_front(3);
	ll.printLL();
	ll.middle_node();
	return 0;
}

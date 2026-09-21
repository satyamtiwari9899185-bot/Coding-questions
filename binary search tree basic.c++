#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data = val;
		left = right = NULL;
	}
};
class BST{
public:
	Node* insert(Node* root, int val){
		if(root == NULL)
		{
			return new Node(val);
		}else{
			if(val < root->data)
			{
				root->left = insert(root->left, val);
			}else{
				root->right = insert(root->right, val);
			}
		}
		return root;	
	}
	Node* buildTree(vector<int>& vec){
	    Node* root = NULL;
	    for(int val : vec){
		    root = insert(root, val);
	    }
		return root;
	}
	void inorder(Node* root){
		if(root == NULL)
		{
			return;
		}
		inorder(root->left);
		cout<< root->data << " ";
		inorder(root->right);
	}
	bool search(Node* root, int key){
		if(root == NULL)
		{
			return NULL;
		}
		if(root->data == key)
		{
			return true;
		}
		if(key < root->data)
		{
			return search(root->left, key);
		}else{
			return search(root->right, key);
		}
	}
	Node* getInorderPrecessor(Node* root){
		while(root!=NULL && root->left!=NULL){
			root = root->left;
		}
		return root;
	}
	Node* delNode(Node* root, int key){
		if(root == NULL)
		{
			return NULL;
		}else{
			if(key < root->data)
			{
				root->left = delNode(root->left, key);
			}else if(key > root->data){
				root->right = delNode(root->right, key);
			}else{
				if(root->right == NULL)
				{
					Node* temp = root->left;
					delete root;
					return temp;
				}else if(root->left == NULL){
					Node* temp = root->right;
					delete root;
					return temp;
				}else{
					Node* IS = getInorderPrecessor(root->right);
					root->data = IS->data;
					root->right = delNode(root->right, IS->data);
				}
				return root;
			}
		}
	}
};







int main(){
	BST t;
	vector<int>vec = {8, 5, 10, 3, 6, 9, 12};
	Node* root = t.buildTree(vec);
	t.inorder(root);
	cout<< t.search(root, 2) << endl;
	cout<< t.delNode(root, 8) << endl;
	t.inorder(root);
	return 0;
}

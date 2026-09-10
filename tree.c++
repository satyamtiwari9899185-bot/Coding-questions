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
class Tree{
public:
    int idx = -1;
    Node* buildTree(vector<int>& preorder){
        idx++;
        if(preorder[idx] == 0)
		{
            return NULL;
        }
        Node* root = new Node (preorder[idx]);
        root->left = buildTree(preorder);
        root->right = buildTree(preorder);
        return root;
    }
};







int main(){
 Tree t;
 vector<int>preorder = {1, 2, 0, 0, 3, 4, 0, 0, 5, 0, 0};
 Node* root = t.buildTree(preorder);
 cout<< root->data << endl;
 cout<< root->left->data << endl;
 cout<< root->right->data << endl;
 return 0;
}

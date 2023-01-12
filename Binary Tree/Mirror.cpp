#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left; 
    Node* right; 
    Node(int d){
        this->data =d;
        this->left =NULL;
        this->right =NULL;
    }
};
// Build Tree from Recursion
Node* buildTree(Node* &root){
    int data; cin>>data;
    if(data == -1){
        return NULL;
    }
    root = new Node(data);
    
    cout<<"Left of "<<data<<endl;
    buildTree(root->left);
    cout<<"Right of "<<data<<endl;
    buildTree(root->right);
    return root;
}
// Mirror option 1
void mirror(Node* &root){
    if(root==NULL){
        return;
    }
    Node* temp ;
    mirror(root->left);
    mirror(root->right);
    temp = root->left;
    root->left = root->right;
    root->right = temp;
    
}
// Build Mirror Tree from Recursion option 2
Node* buildTreeMirror(Node* &root,Node* &root2){
    if(root == NULL){
        return NULL;
    }
    int data = root->data;
    
    root2 = new Node(data);
    
    
    buildTreeMirror(root->right,root2->left);
    buildTreeMirror(root->left,root2->right);
    return root;
}
// InOrder Traversal (LNR)
void InOrderTraversal(Node* root){
    if (root==NULL)return;
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);

}
int main(){
    Node* root = NULL;
    Node* root2 = NULL;
    buildTree(root);
    InOrderTraversal(root);
    mirror(root); 
    cout<<endl;   
    InOrderTraversal(root);
    cout<<endl; 
    buildTreeMirror(root,root2);
    InOrderTraversal(root2);
    return 0;
}
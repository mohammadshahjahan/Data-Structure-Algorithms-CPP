#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data =d;
        this->left = this->right = NULL;
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
void copyTRee(Node* &root,Node* &root2){
    if(root == NULL)return;
    root2 = new Node(root->data);
    copyTRee(root->left,root2->left);
    copyTRee(root->right,root2->right);
}
// PostOrder Traversal (LRN)
void PostOrderTraversal(Node* root){
    if (root==NULL)return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root = NULL;
    Node* root2 = NULL;
    buildTree(root);
    PostOrderTraversal(root);
    cout<<endl;
    copyTRee(root,root2);
    PostOrderTraversal(root2);
    return 0;
}
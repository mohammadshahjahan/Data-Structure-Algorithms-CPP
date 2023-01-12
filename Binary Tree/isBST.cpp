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
// Check if the tree is BST or NOT
void isBST(Node* root,int &m,int &f){
   if(root == NULL) {
    return ;
   }
   isBST(root->left,m,f);
   if(root->data<m){
    f=0;
   }
   m=root->data;
   isBST(root->right,m,f);
}
int main(){
    Node* root = NULL;
    buildTree(root);
    int m = INT16_MIN;int f=1;
    isBST(root,m,f);
    if(f==1){
        cout<<"TREE IS A BST";
    }
    else cout<<"TREE IS'NOT A BST";
}
#include<iostream>
using namespace  std;
class Node{
    public:
    int data;
    Node* left =  NULL;
    Node* right = NULL;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
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
int no_of_nodes(Node* root){
    if(root == NULL)return 0;
    return no_of_nodes(root->left)+no_of_nodes(root->right)+1;
}
int main(){
    Node* root = NULL;
    buildTree(root);
    cout<<no_of_nodes(root)<<endl;
    return 0;
}
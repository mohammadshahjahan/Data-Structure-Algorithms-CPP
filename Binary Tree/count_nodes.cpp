#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        left = right = NULL;
    }  
};
Node* buildTree(Node* &root){
    int d;cin>>d;
    if(d==-1)return NULL;
    root = new Node(d);
    cout<<"Left of "<<d<<endl;
    buildTree(root->left);
    cout<<"right of "<<d<<endl;;
    buildTree(root->right);
    return root;
} 
// Counting nodes using PreOrder Traversal (NLR)
int count_nodes(Node* root,int &c){
    if(root == NULL)return 0;
    c++;
    count_nodes(root->left,c);
    count_nodes(root->right,c);
    return c;
}
int main(){
    Node* root =NULL;
    root = buildTree(root);
    int c=0;
    cout<<count_nodes(root,c);
    return 0;
}
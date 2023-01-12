#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left= NULL;
        this->right = NULL;
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
int height(Node* root){
    if(root == NULL)return 0;
    int lefts = height(root->left);
    int rights = height(root->right);
    return max(lefts,rights)+1;
}
int main(){
    
    Node* root =NULL;
    buildTree(root);
    cout<<height(root)<<endl;
    return 0;
}
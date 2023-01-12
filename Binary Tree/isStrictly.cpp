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
bool is_strictly(Node* root){
    if(root == NULL){
        return true;
    }
    if((root->left == NULL && root->right) || (root->left && root->right == NULL )){
        return false;
    }
    else{
        bool op1 = is_strictly(root->left);
        bool op2 = is_strictly(root->right);
        if(op1 && op2)return true;
        else return false;
    }
}
int main(){
    Node* root = NULL;
    buildTree(root);
    cout<<is_strictly(root)<<endl;
    return 0;
} 
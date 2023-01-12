// Number of nodes with two child
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
int count_twoCHILD_parent(Node* root){
    if(root == NULL){
        return 0;
    }
    else{
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        else{
            if(root->left!=NULL && root->right!=NULL){
                return 1+count_twoCHILD_parent(root->left)+count_twoCHILD_parent(root->right);
            }
            
            return count_twoCHILD_parent(root->left)+count_twoCHILD_parent(root->right);
        }
    }
}
int main(){
    Node* root = NULL;
    buildTree(root);
    cout<<count_twoCHILD_parent(root)<<endl;
    return 0;
} 
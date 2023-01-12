#include <iostream>
using namespace std;
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
    int n;cin>>n;
    if(n==-1)return NULL;
    root = new Node(n);
    cout<<"Left of "<<n<<endl;
    buildTree(root->left);
    cout<<"Right of "<<n<<endl;
    buildTree(root->right);
    return root;
}
int leaf_node(Node* root){
    if(root == NULL)return 0;
    else {
        if(root->left == NULL && root->right ==NULL){
            return 1;
        }
        else {
            return leaf_node(root->left)+leaf_node(root->right);
        }
    }
}
int main()
{
    Node* root =NULL;
    buildTree(root);
    cout<<leaf_node(root)<<endl;
    return 0;
}
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
    node(int d){
        this->data=d;
        this->left=this->right=NULL;
    }
};
// Build Tree from Recursion
node* buildTree(node* &root){
    int data; cin>>data;
    if(data == -1){
        return NULL;
    }
    root = new node(data);
    
    cout<<"Left of "<<data<<endl;
    buildTree(root->left);
    cout<<"Right of "<<data<<endl;
    buildTree(root->right);
    return root;
}
node* LCA(node* root,int p,int q){
    if(root==NULL||root->data==p||root->data==q)return root;
    else{
        node* l = LCA(root->left,p,q);
        node* r = LCA(root->right,p,q);
        if(!l)return r;
        else if(!r)return l;
        else return root;
    }
}
int main(){
    node* root = NULL;
    buildTree(root);
    cout<<"P and Q values : "<<endl;
    int p,q;
    cin>>p>>q;
    node * lca = LCA(root,p,q);
    cout<<lca->data<<endl;
    return 0 ;
}
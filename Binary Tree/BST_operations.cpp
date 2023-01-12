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
// Build BINARY SEARCH TREE
Node* buildBST(Node* root,int d){
    Node* temp = new Node(d);
    if (root == NULL){
        root = temp;
        return root;
    }
    else{
        Node* p = root;
        Node* q =NULL;
        while(p!=NULL){
            q = p;
            if(p->data > d){
                p = p->left;
            }
            else{
                p = p->right;
            }
        }
        if(q->data > d){
            q->left = temp;
        }
        else q->right = temp;
        return root;
    } 
}
// Binary search
bool search_(Node* root,int d){
    if(root == NULL)return false;
    if(root->data == d)return true;
    if(root->data >d){
        return search_(root->left,d);
    }
    else{
        return search_(root->right,d);
    }
}
// InOrder Traversal (LNR)
void InOrderTraversal(Node* root){
    if (root==NULL)return;
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);

}
// Maximum Data in BST
Node* maxi(Node* root){
    if(root == NULL)return NULL;
    Node* p = root;
    Node* q =NULL;
    while(p!=NULL){
        q=p;
        p = p->right;
    }
    return q;
}
// Minimum Data in BST
Node* mini(Node* root){
    if(root == NULL)return NULL;
    Node* p = root;
    Node* q =NULL;
    while(p!=NULL){
        q=p;
        p = p->left;
    }
    return q;
}
int main(){
    Node* root = NULL;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        root = buildBST(root,x);
    }
    InOrderTraversal(root);
    cout<<endl;
    int v; cin>>v;
    cout<<search_(root,v)<<endl;
    Node* min = mini(root);
    Node* max = maxi(root);
    if(min == NULL)cout<<"NULL MIN"<<endl;
    else cout<<"MINIMUM : "<<min->data<<endl;
    if(max == NULL)cout<<"NULL MAX"<<endl;
    else cout<<"MAXIMUM : "<<max->data<<endl;


    return 0;
}
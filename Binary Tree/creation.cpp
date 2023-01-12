#include <iostream>
#include <queue>
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
// Build Tree from Level Order Traversal
void buildTreeByLevelOrder(Node* &root){
    queue<Node*>q;
    int d;cout<<"Enter the Data for Root Node"<<endl;
    cin>>d;
    root = new Node(d);
    q.push(root);
    while(!q.empty()){
        Node* t= q.front();
        q.pop();
        cout<<"Left of "<<t->data<<endl;
        int lt ;cin>>lt;
        if(lt!=-1){
            t->left = new Node(lt);
            q.push(t->left);
        }
        cout<<"Right of "<<t->data<<endl;
        int rt ;cin>>rt;
        if(rt!=-1){
            t->right = new Node(rt);
            q.push(t->right);
        }
    }
}
// Level Order Traversal
void LevelOrderTraversal(Node* root){
    if(root==NULL)return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* t = q.front();
        
        q.pop();
        if(t == NULL){
            cout<<endl;
            if(!q.empty())q.push(NULL);
        }
        else{
            cout<<t->data<<" ";
            if(t->left!=NULL)
            q.push(t->left);
            if(t->right!=NULL){
                q.push(t->right);
            }
        }
        
        
    }
    
}
// InOrder Traversal (LNR)
void InOrderTraversal(Node* root){
    if (root==NULL)return;
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);

}

// PreOrder Traversal (NLR)
void PreOrderTraversal(Node* root){
    if (root==NULL)return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
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
    buildTree(root);
    LevelOrderTraversal(root);
    
    InOrderTraversal(root);
    cout<<endl;
    PreOrderTraversal(root);
    cout<<endl;
    PostOrderTraversal(root);

    Node* root2 = NULL;
    buildTreeByLevelOrder(root2);
    LevelOrderTraversal(root2);
    return 0;
}
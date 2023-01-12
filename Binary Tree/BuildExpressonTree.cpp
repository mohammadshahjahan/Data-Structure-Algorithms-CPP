#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    char data;
    Node* left;
    Node* right;
    Node(char d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
bool prcd(char a, char b){
    if (a == '(')
        return false;
    else if (b == '(')
        return false;
    else if (b == ')')
        return true;
    else
    {

        if (a == '^' || a == '*' || a == '/' || a == '%')
        {
            if (b == '^')
                return false;
            else
                return true;
        }
        else
        {
            if (b == '+' || b == '-')
                return true;
            else
                return false;
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
Node* buildExpressionTree(){
    stack<Node*> opnd;
    stack<char> opertr;
    string s;cin>>s;
    int i=0;
    while(i<s.length()){
        char symb = s[i];
        if(symb>='a'&&symb<='z'){
            Node* x = new Node(symb);
            opnd.push(x);
        }
        else{
            while(!(opertr.empty()) && prcd(opertr.top(),symb)){
                char op = opertr.top();
                opertr.pop();
                Node* t = new Node(op);
                Node* b = opnd.top();
                opnd.pop();
                Node* a = opnd.top();
                opnd.pop();
                t->left = a;
                t->right = b;
                opnd.push(t);
            }
            opertr.push(symb);
        }
        i++;
    }
    while(!opertr.empty()){
        char op = opertr.top();
        opertr.pop();
        Node* t = new Node(op);
        Node* b = opnd.top();
        opnd.pop();
        Node* a = opnd.top();
        opnd.pop();
        t->left = a;
        t->right = b;
        opnd.push(t);
    }
    return opnd.top();
}
int main(){
    Node* root = buildExpressionTree();
    InOrderTraversal(root);
    cout<<endl;
    PostOrderTraversal(root);
    cout<<endl;
    PreOrderTraversal(root);
    return 0;
}
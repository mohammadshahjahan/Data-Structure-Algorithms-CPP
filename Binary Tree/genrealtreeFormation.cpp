#include <iostream>
#include <queue>
using namespace std;
class node{
    public:
    int data;
    node* child,*sibling;
    int c;
    node(int d){
        this->data=d;
        this->child=this->sibling=NULL;
        c=0;
    }
};
void formation(node* &root){
    int d;cin>>d;
    if(d==-1)return ;
    root = new node(d);
    cout<<"left of "<<d<<endl;
    formation(root->child);
    cout<<"right of "<<d<<endl;
    formation(root->sibling);
}
void level(node* root){
    if(root!=NULL){
        queue<node*>q;
        q.push(root);
        cout<<root->data<<" ";
        while(!q.empty()){
          node *x=q.front();
          q.pop();
          
          if(x->child!=NULL){
            q.push(x->child);
            cout<<x->data<<" ";
          }
          node* p = x->child->sibling;
          
          while(p!=NULL){
            q.push(p->sibling);
            cout<<p->sibling->data<<" ";
            p=p->sibling;
          }
        }
    }
    

}
int main(){
    node* root=NULL;
    formation(root);
    level(root);
    return 0;
}

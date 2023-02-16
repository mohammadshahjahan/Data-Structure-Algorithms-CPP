#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insend(Node* &head,int x,vector<Node*>HT){
    if(head==NULL){
        Node* temp = new Node(x);
        head=temp;
    }
    else{
        while(head->next!=NULL){
        head = head->next;
        }
        Node* temp = new Node(x);
        head->next=temp;
    }
    

}

int main(){
    int n;cin>>n;
    vector<Node*>HT(15,NULL);
    for(int i=0;i<n;i++){
        int x ;cin>>x;
        int r= x%10;
        insend(HT[r],x,HT);
        
    }
    for(int i=0;i<15;i++){
        Node* temp = HT[i];
        cout<<i<<": ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
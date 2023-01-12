#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};
// insert at beginning
void insbeg(Node* &head,int d){
    // create new node
    Node* temp = new Node(d);

    temp->next=head;
    head=temp;
}
// insert at end
void insend(Node* &tail,int d){
    //create new node
    Node* temp = new Node(d);

    tail->next=temp;
    tail=tail->next;
}


void middle(Node* &head){
    Node* temp1 = head;
    Node* temp2 = head;
    while(temp2!=NULL && temp2->next!=NULL){
        temp2=temp2->next->next;
        temp1=temp1->next;
    }
    
    cout<<temp1->data<<" ";
    
}

int main(){
    Node* node = new Node(0);
    Node* head = node;
    Node* tail = node;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        insend(tail,x);
    }
    middle(head);
    return 0;
}
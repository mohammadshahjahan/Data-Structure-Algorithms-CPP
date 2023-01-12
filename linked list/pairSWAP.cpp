#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){ 
        this->data = d;
        this->next = NULL;
    }
};
// insert at beginning
void insbeg(Node* &head,Node* &tail,int d){
    // create new node
    Node* temp = new Node(d);
    if(head == NULL){
       temp->next=head; 
       head=temp;
       tail = temp;
       return;
    }
    temp->next=head;
    head=temp;
}
// insert at end
void insend(Node* &head,Node* &tail,int d){
    //create new node
    Node* temp = new Node(d);
    if(tail == NULL){
       temp->next=head; 
       head=temp;
       tail = temp;
       return;
    }
    tail->next=temp;
    tail=tail->next;
}
void swap(Node* &head){
    Node* t = head;
    Node* p = head->next;
    
    while(p!=NULL ){
        int temp = t->data;
        t->data = p->data;
        p->data = temp;
        t = t->next->next;
        p = p->next;
        if(p!=NULL)
        p = p->next;
        
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        insend(head,tail,x);
    }
    print(head);
    swap(head);
    print(head);
    return 0;
}
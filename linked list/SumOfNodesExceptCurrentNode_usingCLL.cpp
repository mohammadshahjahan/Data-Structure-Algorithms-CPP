#include <iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* next = NULL;
    Node(int d){
        this->data = d;
        this->next = this;
    } 
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insend(Node* &tail,Node* &head,int d){
    //create new node
    Node* temp = new Node(d);

    tail->next=temp;
    temp->next = head;
    head = temp;
}

void sum(Node* &tail,Node* &head)
{
    int sum=0;
    Node* temp = head;
    while(temp!=tail){
        sum+=temp->data;
        temp=temp->next;
    }
    sum+=temp->data;
    temp = head;
    while(temp!=tail){
        temp->data=sum-temp->data;
        temp=temp->next;
    }
    temp->data=sum-temp->data;
}
void output(Node* &tail,Node* &head){
    Node* temp = head;
    while(temp!=tail){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main(){
    Node* node1 = new Node(50);
    Node* head = node1;
    Node* tail = node1;
    insend(tail,head,40);
    insend(tail,head,30);
    insend(tail,head,20);
    insend(tail,head,10);
    output(tail,head);
    cout<<endl;
    sum(tail,head);
    output(tail,head);
    cout<<endl;
    
    return 0;
}
// OUTPUT:
// 10->20->30->40->50
// 140->130->120->110->100
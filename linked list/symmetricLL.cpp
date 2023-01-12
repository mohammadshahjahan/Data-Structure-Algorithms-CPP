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

void insbeg(Node* &head,int d){
    // create new node
    Node* temp = new Node(d);

    temp->next=head;
    head=temp;
}

void insend(Node* &tail,int d){
    //create new node
    Node* temp = new Node(d);

    tail->next=temp;
    tail=tail->next;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void merge(Node* &head1,Node* &head2,Node* &head3,Node* &tail1,Node* &tail2,Node* &tail3){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp3 = head3;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            insend(tail3,temp1->data);
            temp1 = temp1->next;
        }
        else{
            if(temp1->data==temp2->data){
                temp2 = temp2->next;
                temp1 = temp1->next;
                
            }
            else{
                insend(tail3,temp2->data);
                temp2=temp2->next;
            }
        }
    }
    while(temp1!=NULL){
        insend(tail3,temp1->data);
        temp1 = temp1->next;
    }
    
}
int main(){
    Node* node1 = new Node(5);
    Node* node2 = new Node(7);
    Node* node3 = new Node(0);
    Node* head1 = node1;
    Node* tail1 = node1;
    Node* head2 = node2;
    Node* tail2 = node2;
    Node* head3 = node3;
    Node* tail3 = node3;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        insend(tail1,x);
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        insend(tail2,x);
    }
    head1=head1->next;
    head2=head2->next;
    merge(head1,head2,head3,tail1,tail2,tail3);
    head3=head3->next;
    print(head3);
    return 0;
}

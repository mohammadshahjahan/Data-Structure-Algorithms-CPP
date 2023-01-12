#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
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
// Delete Node
void deleteNode(int pos , Node* &head){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prv = NULL;
        int cnt =1;
        while(cnt<=pos){
            prv = curr;
            curr=curr->next;
            cnt++;
        }
        prv->next= curr->next;
        delete curr;

    }
}
int cnt(Node* &head){
    Node* temp = head;
    int c=1;
    while(temp->next!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
void addLL(Node* &head1,Node* &head2,Node* &head3,Node* &tail1,Node* &tail2,Node* &tail3){
    Node* temp1 = head1;
    Node* temp2 = head2;
    int carry =0;
    while(temp1!=NULL&&temp2!=NULL){
        int add = (temp1->data+temp2->data+carry)%10;
        insbeg(head3,add);
        carry = (temp1->data+temp2->data+carry)/10;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    while(temp1!=NULL){
        int add = (temp1->data+carry)%10;
        insbeg(head3,add);
        carry = (temp1->data+carry)/10;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        int add = (temp2->data+carry)%10;
        insbeg(head3,add);
        carry = (temp2->data+carry)/10;
        temp2=temp2->next;
    }
    if(carry>1)
    insbeg(head3,carry);
}
void print(Node* &head,int p){
    Node* temp = head;int c=1;
    while(temp!=NULL && c<p){
        cout<<temp->data;
        c++;
        temp=temp->next;
    }
}
int main(){
    Node* node1 = new Node(0);
    Node* head1 = node1; 
    Node* tail1 = node1; 
    Node* node2 = new Node(0);
    Node* head2 = node2;
    Node* tail2 = node2;
    Node* node3 = new Node(0);
    Node* head3 = node3;
    Node* tail3 = node3;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        insbeg(head1,x);
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        insbeg(head2,x);
    }
    addLL(head1,head2,head3,tail1,tail2,tail3);
    int p = cnt(head3);
    print(head3,p);

    return 0;
}
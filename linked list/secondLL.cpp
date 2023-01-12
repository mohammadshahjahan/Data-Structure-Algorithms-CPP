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
// insert at middle
void insert(Node* &tail,Node* &head,int p , int d){
    if (p==1){
        insbeg(head,d);
        return;
    }
    Node* temp = head;
    int c=1;
    while(c<p-1){
        temp = temp->next;
        c++;
    }
    if(temp->next==NULL){
        insend(tail,d);
        return;
    }
    Node* nodeinsert = new Node(d);
    nodeinsert->next=temp->next;
    temp->next=nodeinsert;
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

//print the linked list
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    insbeg(head,12);
    insbeg(head,12);
    insbeg(head,11);
    insend(tail,15);
    insend(tail,14);
    insert(tail,head,3,55);
    insert(tail,head,1,1);
    insert(tail,head,9,1);
    insert(tail,head,10,114);
    print(head);

}
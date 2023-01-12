#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    // destructor
    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"\nNode of value "<<val<<" is deleted"<<endl;
    }
};

void insertNode(Node* &tail,int elmnt,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else{
        Node* temp = new Node(d);
        Node* curr = tail;
        while(curr->data!=elmnt){
            curr=curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}

void output(Node* &tail){
    Node* temp = tail->next;
    while(temp!=tail){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
}




int main(){
    Node* tail = NULL;
    int n;cin>>n;
    while(n--){
        int x,y;cin>>x>>y;
        insertNode(tail,x,y);
    }
    output(tail);
    return 0;
}
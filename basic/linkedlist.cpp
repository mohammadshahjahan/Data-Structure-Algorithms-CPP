#include<iostream>

using namespace std;

// Create A class node

class node{
    public:
    int data;
    node* next;

    // Node Class Constructor
    node(int val){
        data=val;
        next=NULL;

    }
};

// Insert Element At Tail

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        }
        temp->next=n;
}

// Display All Element

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// Insert At Head

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

// Seraching  At Linked List

bool Search(node* head,int key){
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==key){
          return true;
        }
        temp=temp->next;  
  }
  return false;
}
void deletion(node* &head,int val){
  node* temp = head;
  while(temp->next->data!=val){
    temp = temp->next;
  }
  node* del = temp->next;
  temp->next = temp->next->next;
  delete del;
  }
node* reverse(node* &head){

  node* previous=NULL;
  node* current=head;
  node* nextptr;

  while(current!=NULL)
    {
      nextptr=current->next;
      current->next=previous;

     previous=current;
      current=nextptr;
    }
 return previous;
}
node* reversek(node* &head,int k){
  node* prvptr=NULL;
  node* currptr=head;
  node* nextptr;
  int count=0;
  while(currptr!=NULL && count<k){
    nextptr=currptr->next;
      currptr->next=prvptr;

     prvptr=currptr;
      currptr=nextptr;
    count++;
    
  }
  if(nextptr!=NULL){
    
  
  head->next=reversek(nextptr,k);}
  
  return prvptr;
}
int main(){
    
    node* head =NULL;
    insertAtTail(head,12);
    insertAtTail(head,178);
    insertAtTail(head,1788);
    display(head);
    insertAtHead(head,345);
    display(head);
    cout<<Search(head,178);
    deletion(head,1788);
    display(head);
     cout<<endl;
  node* newhead=reverse(head);
  display(newhead);
    return 0;
}
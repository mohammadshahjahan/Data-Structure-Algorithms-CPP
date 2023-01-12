#include <iostream>
#include <algorithm>
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};
// insert at end
void insend(Node* &tail,int d){
    //create new node
    Node* temp = new Node(d);

    tail->next=temp;
    tail=tail->next;
}
// Reverse the Linked List
Node* reverseLL(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* n = curr->next;
    while(curr!=NULL){
        curr->next = prev;
        prev = curr;
        curr = n;
        if(n!=NULL){
            n=n->next;
        }
    }
    return prev;
}
//print the linked list
void output(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        insend(tail,x);
    }
    head=head->next;
    head = reverseLL(head);
    output(head);
    return 0;
} 
#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    int cons;
    int expo;
    Node *next;
    Node(int cons,int expo){
        this->cons=cons;
        this->expo=expo;
        this->next = NULL;
    }
};
//insert at the end
void insend(Node* &tail,int cons,int expo){
    //create new node
    Node* temp = new Node(cons,expo);
    tail->next=temp;
    tail=tail->next;
}
// Print the linked list
void output(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<(temp->cons)<<"x^"<<(temp->expo)<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// Negative of a polynomial
void negative_poly(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        temp->cons= (-1)*temp->cons;
        temp=temp->next;
    }
}

// Addition of two polynomials
void add_poly(Node* &head1,Node* &head2,Node* &head3,Node* &tail1,Node* &tail2,Node* &tail3){
    Node *temp1 = head1;
    Node *temp2 = head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->expo==temp2->expo){
            insend(tail3,temp1->cons+temp2->cons,temp1->expo);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else{
            if(temp1->expo > temp2->expo){
                insend(tail3,temp1->cons,temp1->expo);
                temp1=temp1->next;
            }
            else{
                insend(tail3,temp2->cons,temp2->expo);
                temp2=temp2->next;
            }
        }
    }
    while(temp1!=NULL){
        insend(tail3,temp1->cons,temp1->expo);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        insend(tail3,temp2->cons,temp2->expo);
        temp2=temp2->next;
    }
}
int main()
{
    Node *poly1 = new Node(0,0);
    Node *poly2 = new Node(0,0);
    Node *poly3 = new Node(0,0);
    Node* head1 = poly1;
    Node* head2 = poly2;
    Node* head3 = poly3;
    Node* tail1 = poly1;
    Node* tail2 = poly2;
    Node* tail3 = poly3;
    //insert at the Polynomial 1
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        insend(tail1,x,y);
    }
    head1=head1->next;
    //insert at the Polynomial 2
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        insend(tail2,x,y);
    }
    head2=head2->next;
    negative_poly(head2);
    // Addition
    add_poly(head1,head2,head3,tail1,tail2,tail3);
    head3=head3->next;
    output(head3);
}
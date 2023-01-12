# include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

// insert at end
void insend(Node* &head,Node* &tail,int d){
    //create new node
    Node* temp = new Node(d);
    if(tail==NULL){
        head= temp;
        tail=temp;
        return;
    }
    tail->next=temp;
    tail=tail->next;
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
//Delete the Kth Node in single iteration without knowing the length of string
Node* deletekthnode(Node* &head,int k){
    Node* temp = new Node(0);
    temp->next=head;
    Node* temp2 = temp;
    Node* temp1 = temp;
    int c=1;
    while(c<=k){
        temp2=temp2->next;
        c++;
    }
    while(temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp1->next=temp1->next->next;
    return temp->next;
    
    
}
int main(){
    
    int n;cin>>n;
    Node* tail = NULL;
    Node* head = NULL;
    while(n--){
        int x;cin>>x;
        insend(head,tail,x);
    }
    print(head);
    int k;cin>>k;
    head = deletekthnode(head,k);
    print(head);
    return 0;
}

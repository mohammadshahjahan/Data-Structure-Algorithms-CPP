#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
 

void reverse(node*&head)
{
    node*temp = NULL;
    node*curr = head;
   
    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;          
        curr = curr->prev;
    }
 
   
    if(temp != NULL )
        head = temp->prev;
}

void insertElement(node*&head, int val)
{
    node * n = new node(val);
    if(head == NULL)
    {
        head = n;
        head->next= NULL;
        return ;
    }
    else {
    node*temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    }
}
 
 
 

void display(node*&head)
{
    node*temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    
    node*head = NULL;
    insertElement(head, 1);
    insertElement(head, 2);
    insertElement(head, 3);
    insertElement(head, 4);
   
    cout << "Original Linked list" << endl;
    display(head);
    
    
    reverse(head);
   
    cout << "Reversed Linked list" << endl;
    display(head);      
   
    return 0;
}
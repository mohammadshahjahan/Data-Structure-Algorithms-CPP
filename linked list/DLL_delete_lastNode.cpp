#include<iostream>

using namespace std;
struct node { 
  int data;
  node * next;
  node * previous;
  node(int d) { 
    data = d;
    previous = NULL;
    next = NULL;
  }
};
node * delete_last(node * head) {
  node * current = head;
  while (current -> next != NULL) { 
    current = current -> next;
  }
  node * temp = current; 
  current -> previous -> next = NULL;  
 
  delete temp; 
  return head;
}
void print_dll(node * head) {
  node * current = head;
  while (current != NULL) {
    cout << current -> data << " ";
    current = current -> next;
  }
  cout<<endl;
}
int main() {
  
  node * head = new node(10);
  node * node1 = new node(20);
  node * node2 = new node(30);

 
  head -> next = node1;
  node1 -> previous = head;
  node1 -> next = node2;
  node2 -> previous = node1;
  cout<<"Original Doubly Linked List"<<endl;
  print_dll(head);
  head = delete_last(head);
  cout<<"After deleting the Last node"<<endl;
  print_dll(head); 
  return 0;
}
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
// insert at beginning
void insbeg(Node *&head, Node *&tail, int d)
{
    // create new node
    Node *temp = new Node(d);
    if (head == NULL)
    {
        temp->next = head;
        head = temp;
        tail = temp;
        return;
    }
    temp->next = head;
    head = temp;
}
// insert at end
void insend(Node *&head, Node *&tail, int d)
{
    // create new node
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        temp->next = head;
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = tail->next;
}
Node *mid(Node *&head)
{
    Node *p = head;
    Node *q = head;
    while (q->next != NULL && q->next->next != NULL)
    {
        p = p->next;
        q = q->next->next;
    }
    q = p->next;
    p->next = NULL;
    return q;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insend(head, tail, x);
    }
    Node *start2 = mid(head);
    print(head);
    print(start2);
    return 0;
}
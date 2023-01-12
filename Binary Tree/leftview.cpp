#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// Build Tree from Recursion
Node *buildTree(Node *&root)
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);

    cout << "Left of " << data << endl;
    buildTree(root->left);
    cout << "Right of " << data << endl;
    buildTree(root->right);
    return root;
}
void right_view(Node *root)
{
    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
        q.push(NULL);
        cout << root->data << " ";
    }
    
    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();
        if (t == NULL)
        {
            if (!q.empty())
            {
                Node *a = q.front();
                cout << a->data << " ";
            }
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            if (t->left != NULL)
                q.push(t->left);
            if (t->right != NULL)
            {
                q.push(t->right);
            }
        }
    }
}
int main()
{
    Node *root = NULL;
    buildTree(root);
    right_view(root);
    return 0;
}
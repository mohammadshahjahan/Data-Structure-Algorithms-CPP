#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> c;
    stack<int> b;
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int y;cin>>y;c.push(y);
    }

    while (!c.empty())
    {
        int x = c.top();
        c.pop();
        
        while (!b.empty() && b.top() > x  )
        {
            c.push(b.top());
            b.pop();
        }
        b.push(x);
        
    }
    while (!b.empty())
    {
        cout << b.top() << " ";
        b.pop();
    }
    return 0;
}
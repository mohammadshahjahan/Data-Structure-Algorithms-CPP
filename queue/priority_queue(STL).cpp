#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;                             // Max Heap
    priority_queue<int, vector<int>, greater<int>> pq2; // Min Heap
    pq.push(8);
    pq.push(6);
    pq.push(4);
    pq.push(3);
    pq.push(9);
    pq.push(1);
    pq.push(0);
    pq.push(2);
    pq2.push(8);
    pq2.push(6);
    pq2.push(4);
    pq2.push(3);
    pq2.push(9);
    pq2.push(1);
    pq2.push(0);
    pq2.push(2);
    cout << "Max Priority Queue Outputs : " << endl;
    int n = pq.size();
    for (int i = 0; i < n; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\nMin Priority Queue Outputs : " << endl;
    int m = pq2.size();
    for (int i = 0; i < m; i++)
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
    return 0;
}
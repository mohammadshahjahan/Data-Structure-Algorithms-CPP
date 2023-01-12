#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << endl
         << "memory allocated is " << v.capacity();

    v.push_back(1);
    cout << endl
         << "memory allocated is " << v.capacity();
    v.push_back(2);
    cout << endl
         << "memory allocated is " << v.capacity();
    v.push_back(3);
    cout << endl
         << "memory allocated is " << v.capacity();
    v.push_back(4);
    v.push_back(5);
    cout << endl
         << "memory allocated is " << v.capacity();
    v.push_back(6);
    cout << endl
         << "no of elements " << v.size();
    for (auto i : v)
        cout << endl
             << " " << i;
    v.pop_back();
    cout << endl;
    for (int i = 0; i < v.size(); i++)
        cout << endl
             << " " << v[i];

    
    return 0;
}
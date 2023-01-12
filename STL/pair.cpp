#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    int m = n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    int i = 0;
    while (i < m)
    {
        cout << v[i].first << " " << v[i].second << endl;
        i++;
    }

    return 0;
}
//Making Adjacent List and Adjacent and Incidence Matrix and degree of every Vertex

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> adjlist[v];
    int adjmat[v][v];
    vector<vector<int>> incmat(v);
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            adjmat[i][j] = 0;
        }
    }
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < e; j++)
        {
            incmat[i].push_back(0);
        }
    }

    int m = 0;
    for (int i = 1; i <= e; i++)
    {
        int a, b;
        cout << "Enter the end points of Edge " << i << " ";
        cin >> a >> b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
        adjmat[a][b] = 1;
        adjmat[b][a] = 1;
        incmat[a][m] = 1;
        incmat[b][m] = 1;
        if (m < e)
            m++;
    }

    cout << "Adjacent List : " << endl;

    for (int i = 0; i < v; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < adjlist[i].size(); j++)
        {
            cout << adjlist[i][j] << ",";
        }
        cout << endl;
    }

    cout << "Adjacent Matrix : " << endl;

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "All Vertices Degree : " << endl;

    for (int i = 0; i < v; i++)
    {
        cout << i << ": " << adjlist[i].size() << endl;
    }

    cout << "Incidence Matrix : " << endl;

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cout << incmat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
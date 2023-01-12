#include <iostream>
#include <vector>
using namespace std;
int main(){
    int v, e;
    cin >> v >> e;
    vector<int> adjlist[v];
        for (int i = 1; i <= e; i++)
    {
        int a, b;
        cout << "Enter the end points of Edge " << i << " ";
        cin >> a >> b;
        adjlist[a].push_back(b);
        
    }
    vector<int> indeg(v);
    vector<int> outdeg(v);
    for(int i=0;i<v;i++){
        outdeg[i]=adjlist[i].size();
        for(int j=0;j<adjlist[i].size();j++){
            indeg[adjlist[i][j]]++;
        }
    }
    cout<<"IN DEGREE OF EVERY VERTEX: "<<endl;
    for(int i=0;i<v;i++){
        cout<<i<<": "<<indeg[i]<<endl;
    }
    cout<<"OUT DEGREE OF EVERY VERTEX: "<<endl;
    for(int i=0;i<v;i++){
        cout<<i<<": "<<outdeg[i]<<endl;
    }
    return 0;
}
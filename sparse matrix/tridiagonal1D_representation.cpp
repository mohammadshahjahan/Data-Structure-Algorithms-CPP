#include <iostream>
#include <vector>
using namespace std;
int main(){
    int  n;cin>>n;
    int t = 3*(n-2) + 4;
    vector<int>v(t+1);
    for(int k=1;k<=t;k++){
        int  i,j,data;
        cin>>i>>j>>data;
        int index = 2*i + j - 2;
        v[index]=data;
    }
    cout<<endl;
    for(int i=1;i<=t;i++)cout<<v[i]<<" ";
    return 0;
}

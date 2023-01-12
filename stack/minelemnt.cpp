#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;cin>>n;stack<int>s;stack<int>r;
    for(int i=0;i<n;i++){
        int x;cin>>x;s.push(x);
    }
    int min = INT16_MAX;
    for(int i=0;i<n;i++){
        int d = s.top();
        if(d<min)min=d;
        r.push(d);
        s.pop();
    }
    for(int i=0;i<n;i++){
        int d = r.top();
        s.push(d);
        r.pop();
    }
    cout<<min<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            /* code */
            cout<<max(abs(n-i),abs(n-j))+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// 3 3 3 3 3 
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3
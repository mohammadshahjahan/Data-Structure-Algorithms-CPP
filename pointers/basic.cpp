#include <iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=&a[0];
    for(int i=0;i<10;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
    int *q;
    int n;cin>>n;
    q=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=n+1;i++){
        cin>>*(q+i);
    }
    for(int i=0;i<=n+1;i++){
        cout<<*(q+i)<<" ";
    }
    return 0;
}
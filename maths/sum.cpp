#include <iostream>
using namespace std;
bool sum(int n){
    int m=n;int r=n;
    int c=0;int i=0;
    int right=0,left=0;
    while(m>0){
        c++;m/=10;
    }
    m=n;
    while(i<c/2){     
        int y = m%10;
        right+=y;
        m/=10;i++;
    }
    i=0;m=m/10;
    while(i<c/2){
        int y = m%10;
        left+=y;
        m/=10;i++;
    }
    if(left==right)return true;
    else return false;
}
int main(){
    int n;cin>>n;
    if(sum(n))cout<<"Yes";
    else cout<<"No";
    return 0;
}
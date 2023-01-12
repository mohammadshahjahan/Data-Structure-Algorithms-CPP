#include <iostream>
using namespace std;
void TOH(int n,char s,char m,char d){
    if(n==1){
        cout<<s<<" to "<<d;
        cout<<endl;
    }
    else{
    TOH(n-1,s,d,m);
    cout<<s<<" to "<<d<<endl;
    TOH(n-1,m,s,d);
    }
}
int main(){
    int n;cin>>n;
    char s='s';
    char m='m'; char d='d';
    TOH(n,s,m,d);
    return 0;
}
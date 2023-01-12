#include<iostream>
using namespace std;
struct complex{
    int real;int imaginary;
};
int main(){
    int n; cin>>n;
    struct complex c[n];
    int ans =0;int ima =0;
    for(int i=0;i<n;i++){
        cin>>c[i].real>>c[i].imaginary;
        ans+=c[i].real;
        ima+=c[i].imaginary;
    }
    cout<<ans<<"+"<<ima<<"i"<<endl;
    return 0;
}
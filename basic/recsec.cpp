#include <iostream>
using namespace std;
void print(int n){
    if(n<=0){
        cout<<n<<" ";
        return;
    }
    else{
        cout<<n<<" ";
        print(n-5);
        cout<<n<<" ";
    }
}
int main(){
    int n; cin>>n;
    print(n);
    return 0;
}
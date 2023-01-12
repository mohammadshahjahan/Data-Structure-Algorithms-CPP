#include <iostream>
#include <random>
using namespace std;
int main(){
    int x,y;cin>>x>>y;

    for(int i=0;i<9;i++){
         random_device r;
         mt19937 n(r());
         uniform_int_distribution<> ra(x, y);
         cout<<ra(n)<<endl;
    }
    

    return 0;
}
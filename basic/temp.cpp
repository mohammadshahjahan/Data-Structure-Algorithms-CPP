#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    if(t<0) cout<<"Freezing weather";
    else if((t>=0)&&(t<=10)) cout<<"very cold";
    else if((t>10)&&(t<=20)) cout<<"cold";
    else if((t>20)&&(t<=30)) cout<<"Normal";
    else if((t>30)&&(t<=40)) cout<<"Hot";
    else cout<<"Very hot";
    return 0;
}
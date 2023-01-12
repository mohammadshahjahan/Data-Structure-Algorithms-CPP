#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool check = false;
    if((a+b)>c && (a+c)>b && (b+c)>a){
        check = true;
    }
    if(check){
        if((a==b)&&(b==c)){
            cout<<"equilateral";
        }
        else if(((a==b)&&(a!=c))||((a==c)&&(b!=c))||((c==b)&&(a!=c))) {
            cout<<"isoceles";
        }
        else{
            cout<<" scalene";
        }
    }
    else {
        cout<<" It is not a triangle";
    }
    return 0;
}
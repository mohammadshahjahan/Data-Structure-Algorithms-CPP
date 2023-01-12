#include <iostream>
#include <stack>
#define n 10
using namespace std;
int top1 =-1;int top2 = n;
void push1(int x,int a[]){
    top1++;
    a[top1]=x;
}
void push2(int x,int a[]){
    top2--;
    a[top2]=x;
}
auto top_1(int a[]){
    return a[top1];
}
auto top_2(int a[]){
    return a[top2];
}
void pop1(int a[]){
    cout<<a[top1]<<endl;
    top1--;
}
void pop2(int a[]){
    cout<<a[top2]<<endl;
    top2++;
}
int main(){
    int a[n];
    int j;cin>>j;
    cout<<"Answers are: "<<endl;
    push1(j,a);
    push2(j,a);
    cout<<top_1(a)<<endl;
    cout<<top_2(a)<<endl;
    pop1(a);pop2(a);    

    return 0;
}
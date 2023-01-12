#include <bits/stdc++.h>
using namespace std;
struct student{
    int rno;
    char name[20];
    double prc;
};
        
    
int main(){
    int n;cin>>n;
    student* ptr;
    
    ptr=(struct student *)malloc(n*sizeof(struct student));

    for(int i=0;i<n;i++){
        cin>>(ptr+i)->rno>>(ptr+i)->name>>(ptr+i)->prc;
    }
    cout<<"Students details:-"<<endl;
    for(int i=0;i<n;i++){
        cout<<(ptr+i)->rno<<" "<<(ptr+i)->name<<" "<<(ptr+i)->prc<<endl;
    }
    return 0;
}
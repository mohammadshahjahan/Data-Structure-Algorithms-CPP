#include<iostream>
using namespace std;
#define STACKSIZE INT16_MAX
#define TRUE 1
#define FALSE 0
struct Stack
{
    string item;
    int TOP;
};
struct Stack s;
int IsEmpty(){
    if(s.TOP==-1)return TRUE;
    else return FALSE;
}
int POP(){
    if(IsEmpty()){
        printf("\nSTACK UNDERFLOW ");
        exit(1);
    }
    int x = s.item[s.TOP];
    s.TOP--;
    return x;
}
void PUSH(char x){
    if(s.TOP==STACKSIZE-1){
        printf("\nSTACK OVERFLOW");
        exit(1);
    }
    s.TOP++;
    s.item[s.TOP]=x;
}
void Initialize(){
    s.TOP=-1;
}

char stackTOP(){
    char x= s.item[s.TOP];
    return x;
}
int main(){
    string ex;cin>>ex;
    Initialize();
    int i=0,flag=0;
    while(ex[i]!='\0'){
        if(ex[i]=='('){
            PUSH('(');
        }
        else{
            if(!IsEmpty()){
                POP();
            }
            else{
                flag=1;
                break;
            }
        }
        i++;
    }
    if(flag==0){
        if(IsEmpty()){
            cout<<"correct"<<endl;
        }
        else{
            cout<<"incorrect"<<endl;
        }
    }
    else{
        cout<<"incorrect"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct Stack
{
    int item[STACKSIZE];
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
void PUSH(int x){
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

int stackTOP(){
    int x= s.item[s.TOP];
    return x;
}
int main(){
    int d;
    scanf("%d",&d);
    
    Initialize();
    while(d!=0){
        int r = d%2;
        PUSH(r);
        d/=2;
    }
    while(!IsEmpty()){
        int w= stackTOP();
        printf("%d ",w);
        POP();
    }
    return 0;
}
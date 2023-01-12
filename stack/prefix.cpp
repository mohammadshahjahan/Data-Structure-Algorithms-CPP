#include <iostream>
using namespace std;
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
int poww(int a,int b){
    long long m=1;
    while(a--){
        m*=b;
    }
    return m;
}
int Evaluate(int a,int b,char op){
    switch(op){
        case '+': return a+b;
        case '*': return a*b;
        case '-': return a-b;
        case '&': return a&b;
        case '^': return poww(a,b);
        default : return a/b;
    }
}
int main(){
    Initialize();
    char a[20];
    int ai,bi;int val;
    gets(a); int m=0;
    while(a[m]!='\0'){
        m++;
    }
    m--;
    while(m!=-1){
        char ps= a[m];
        if(ps>='0'&&ps<='9'){
            PUSH(ps-48);
        }
        else{
            ai = POP();
            bi = POP();
            val =Evaluate(ai,bi,ps);
            PUSH(val);
        }
        m--;
    }
    int x=POP();
    printf("%d",x);
    return 0;
}
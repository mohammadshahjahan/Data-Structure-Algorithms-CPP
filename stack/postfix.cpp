#include<iostream>
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
int poww(int b,int a){
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
    int x,i=0,val,b,a;
    char PS[20];
    char symb;
    Initialize();
    scanf("%s", &PS);
    while(PS[i]!='\0'){
        symb=PS[i]; // 1 2 +
        if(symb>='0'&&symb<='9'){ 
            PUSH(symb-48);   
        }
        else{
             b= POP();             
             a = POP();
            val =Evaluate(a,b,symb);
            PUSH(val);
        }
        i++;
    }
    x=POP();
    printf("%d",x);
    return 0;
}
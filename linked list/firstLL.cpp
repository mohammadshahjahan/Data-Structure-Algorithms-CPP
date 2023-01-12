#include <iostream>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node* START ;
struct node* getnode(){
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    return p;
}

void insend(int x){
    struct node *q,*p;
    q=START;
    while(q->next!=NULL)
    q=q->next;

    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
}
void insbeg(int x){
    struct node *q,*p;
    q=START;
    p=getnode();
    p->info=x;
    p->next=q;
    START = p;
}
void traverse(){
    struct node *q;
    q=START;
    int w = 0;int o=0,e=0;
    while(q!=NULL){
        cout<<q->info<<"->";
        w++;
        if((q->info)%2==0)e++;
        else o++;
        q=q->next;
    }
    cout<<"NULL"<<endl;
    cout<<w<<endl;
    cout<<"EVEN : "<<e<<endl;
    cout<<"ODD  : "<<o<<endl;
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        insbeg(x);
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x; cin>>x;
        insend(x);
    }
    traverse();
    return 0;
}
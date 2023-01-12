#include <bits/stdc++.h>
#define max 20
struct Queue{
    int item[max];
    int front;
    int rear;
};

void initialise(struct Queue *q){
    q->front=0;
    q->rear=-1;
}
bool IsEmpty(struct Queue *q){
    if(q->rear-q->front+1 == 0)return true;
    else return false;
}
void Enqueue(struct Queue *q,int x){
    if(q->rear == max-1){
        printf("\n \tQueue overflow");
        exit(1);
    }
    q->rear++;
    q->item[q->rear]=x;
}
int Dequeue(struct Queue *q){
    if (IsEmpty(q)){
        printf("\n \tQueue underflow");
        exit(1);
    }
    int x = q->item[q->front];
    q->front++;
    return x;
}
int main(){
    struct Queue myq;
    initialise(&myq);
    Enqueue(&myq,12);
    Enqueue(&myq,112);
    Enqueue(&myq,1112);
    Enqueue(&myq,11112);
    Enqueue(&myq,111112);
    for(int i=0;i<=4;i++){
        int y = Dequeue(&myq);
        printf("%d ",y);
    }
    return 0;
}
#include<stdio.h>
#define MAX 5
int que[MAX];
int front=-1;
int rear=-1;
int x;
void push(){
   
    if((rear+1)%MAX==front){
        printf("queue is full\n");
    }else{
        printf("Enter The Elements:");
         scanf("%d",&x);
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%MAX;
        que[rear]=x;
    }
}
void peek(){
    if(front==-1){
        printf("queue is empty\n");
    }else{
        printf("peek is %d\n",que[front]);
    }
}
void delete(){
    if(front==-1){
        printf("queue is empty\n");
    }else{
        if(front==rear){
            front=-1;
            rear=-1;
        }else{
        int y;
        y=que[front];
        printf("%d is delete from queue\n",que[front]);
        front=(front+1)%MAX;
    }
    }
}
void display(){
    if(front==-1){
        printf("queue is empty\n");
    }else{
        printf("queue is\n");
            int h=front;
        while (1)
        {
        printf("%d ",que[h]);
            if(h==rear){
            break;
            }
                h=(h+1)%MAX;
        }
   printf("\n");
}
}
int main(){
    push();
    push();
    push();
    push();
    push();
    peek();
    delete();
    display();
    push(60);
    display();
    peek();
    return 0;
}
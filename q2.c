#include<stdio.h>
#define MAX 5
int que[MAX];
int front=-1;
int rear=-1;
int x;
int f;
int i;


void enqueue(){
    printf("enter the element you want to push\n");
        scanf("%d",&x);
    if(rear==MAX-1){
        printf("Queue is full\n");
    }else if(front=-1){
        front=0;
        rear++;
        que[rear]=x;
    }
}
void dequeue(){
    if(front==-1){
        printf("queue is empty\n");
    }else {
        int val;
        val=que[front];
        printf("%d is popped from  queue\n",que[front]);
        if(front==rear){
            front=-1;
            rear=-1;
        }else{
            front++;
        }
    }
}
void peek(){
    if(front==-1){
        printf("queue is empty\n");
    }else{
        printf("peek is:%d\n",que[front]);
    }
}
void display(){
    if(front==-1){
        printf("queue is empty\n");
    }else{
        printf("QUEUE IS:\n");
        for(i=front;i<=rear;i++){
        printf("%d\n",que[i]);
        }

    }
}
int main(){
    int choice;
    while(1){
printf("1.Enqueue\n");
printf("2.POP\n");
printf("3.PEEK\n");
printf("4.DISPLAY\n");
scanf("%d",&choice);

switch(choice){
    case 1:
    enqueue();
    break;
    case 2:
    dequeue();
    break;
    case 3:
    peek();
    break;
    case 4:
    display();
    break;
}
    }
    return 0;
}
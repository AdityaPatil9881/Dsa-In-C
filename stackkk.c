#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int i;
void push(int x){
    if(top==MAX-1){
        printf("stack is full\n");
    }else{
        top++;
        stack[top]=x;
        printf("%d is pushed into stack\n",x);
    }
}
void display(){
    if(top==-1){
        printf("stack is empty\n");
    }else{
        printf("STACK ELEMENTS ARE:\n");
        for(i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty\n");
    }else{
        int y;
        y=stack[top];
        top--;
        printf("%d is popped from stack\n",y);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    display();
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};struct  node*top=NULL;
void push(int val){
    struct node*newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
    printf("pushed :%d\n",val);
};
void pop(){
    struct node*temp;
    temp=top;
    if(top==NULL){
        printf("stack is empty\n");
    }else{
        int val;
        val=temp->data;
        printf("%d is popped form stack\n",val);
        top=top->next;
        free(temp);
    }
};
void display(){
    struct node*temp;
    temp=top;
    printf("stack is:\n");
    while(temp){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
};
int peek(){
   if(top==NULL){
    printf("stack is empty");
   }else{
    printf("peek is:%d",top->data);
    return top->data;
     }
};

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
    peek();
    return 0;
}
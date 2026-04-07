#include <stdio.h>
#include <stdlib.h>
#define size 5
int stack[size];
int top=-1;

int isfull(){
    if(top==size-1){
        return 1;
    }
    return 0;
}

void push(int val){
    if(isfull()){
        printf("Stack is already full");
        return;
    }
    stack[++top]=val;
}
int isempty(){
    if(top==-1){
        return 1;
    }
    return 0;
}
void display(){
    if(isempty()){
        printf("Stack is empty");
        return;
    }
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}
void pop(){
    if(isempty()){
        printf("Stack is empty");
        return;
    }
    else{
        top--;
    }
}

void peek(){

    if(isempty()){
        printf("Stack is empty");
        return;
    }
    printf("%d",stack[top]);

}
int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
   
    pop();
    display();
    
    return 0;

}
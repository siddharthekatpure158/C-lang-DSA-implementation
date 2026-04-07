#include<stdio.h>
#define size 5

int queue[size];
int front=-1,rear=-1;

int isfull(){
    if(rear==size-1){
        printf("Queue is Full");
        return 1;
    }
    return 0;
}

int isempty(){
    if(rear==-1){
        printf("Queue is empty");
        return 1;
    }
    return 0;
}

void enqueue(int val){
    if(isfull()){
        printf("Queue is full");
        return;
    }
    if(front==-1){
        front=0;
    }
    queue[++rear]=val;
}

void display(){
    for(int i=rear;i>=front;i--){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

void dequeue(){
    if(isempty()){
        printf("queue is empty");
    }
    
    front++;

}


int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    display();
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data;
    struct stack* add;
};

struct stack* top=NULL;

void push(int val){
    struct stack* newNode = (struct stack*)malloc(sizeof(struct stack));
    newNode->data = val;
    newNode->add = top;
    top = newNode;
}

void pop(){
    if(top==NULL){
        printf("stack is empty");
        return;
    }
    printf("Deleted element :%d",top->data);
    struct stack* temp=top;
    top=top->add;
    free(temp);
    printf("\n");
}
void isempty(){
    if(top==NULL){
        printf("Stack is empty");
    }
}
void peek(){
    if(top==NULL){
        printf("stack is empty");
        return;
    }
    printf("peek element %d",top->data);
}

void display() {
    struct stack* temp = top;
    if (temp == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->add;
    }
    printf("NULL\n");
}


int main(){
    display();
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();

    return 0;
}


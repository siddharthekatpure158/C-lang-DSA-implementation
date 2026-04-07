#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;

void printList() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        temp->prev=temp;
        
    }
    // val=10 |  a100|10| a200| head=a100 | a200 |20| a300 | val=30  |  |30| null | temp=a200
    }


void insertbeg(int val){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=head;
    
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;

}
//   prev      next                   prev   next
// | a200 |10| NULL |   head =a100    |  |20|a100  | 

int main(){
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    printList();
    // insertbeg(10);
    // insertbeg(20);
    // insertbeg(30);
    // insertbeg(40);
    // printList();
    
}
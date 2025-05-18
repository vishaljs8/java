#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    
};

void display(struct Node *p){
    printf("traverse\t");
    while(p!= NULL){
        printf(" data = %d\t", p->data);
        p=p->next; 
        }
    
}
int main (){
    
    struct Node *head;
    struct Node *one = NULL;
    struct Node *second = NULL;
    struct Node *three = NULL; 

    one = malloc(sizeof (struct Node));
    second = malloc(sizeof (struct Node));
    three = malloc(sizeof (struct Node));

    one -> data = 7;
    one -> next = second;

    second -> data = 6;
    second -> next = three;

    three -> data = 8;
    three->next = NULL;
    head = one;
    display(head);
    
return 0;
}

// #include<stdio.h>
// #include<stdlib.h>
 
// struct Node{
//     int data;
//     struct Node * next;
// };
 
// struct Node* top = NULL;
 
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next; 
//     }
// }
 
// int isEmpty(struct Node* top){
//     if (top==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
 
// int isFull(struct Node* top){
//     struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//     if(p==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
 
// struct Node* push(struct Node* top, int x){
//     if(isFull(top)){
//         printf("Stack Overflow\n");
//     }
//     else{
//         struct Node* n = (struct Node*) malloc(sizeof(struct Node));
//         n->data = x;
//         n->next = top;
//         top = n;
//         return top;
//     }
// }
 
// int pop(struct Node* tp){
//     if(isEmpty(tp)){
//         printf("Stack Underflow\n");
//     }
//     else{
//         struct Node* n = tp;
//         top = (tp)->next;
//         int x = n->data;
//         free(n);
//         return x; 
//     }
// }
 
// int peek(int pos){
//     struct Node* ptr = top;
//     for (int i = 0; (i < pos-1 && ptr!=NULL); i++)
//     {
//         ptr = ptr->next;
//     }
//     if(ptr!=NULL){
//         return ptr->data;
//     }
//     else{
//         return -1;
//     }
// }
 
// int main(){
//     top = push(top, 28);
//     top = push(top, 18);
//     top = push(top, 15);
//     top = push(top, 7);
    
//     linkedListTraversal(top);
//     for (int i = 1; i <= 4; i++)
//     {
//         printf("Value at position %d is : %d\n", i, peek(i));
//     }
//     return 0;
// }





// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// struct Node *top = NULL;

// void linkedListTraversal(struct Node *ptr) {
//     while (ptr != NULL) {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// int isEmpty(struct Node *top) {
//     return top == NULL;
// }

// int isFull(struct Node *top) {
//     struct Node *p = (struct Node *)malloc(sizeof(struct Node));
//     if (p == NULL) {
//         return 1;
//     }
//     free(p);  // Free allocated memory to avoid memory leak
//     return 0;
// }

// void push(int x) {
//     if (isFull(top)) {
//         printf("Stack Overflow\n");
//     } else {
//         struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//         n->data = x;
//         n->next = top;
//         top = n;  // Update the global top pointer
//     }
// }

// int pop() {
//     if (isEmpty(top)) {
//         printf("Stack Underflow\n");
//         return -1; // Return sentinel value when stack is empty
//     } else {
//         struct Node *n = top;
//         top = top->next;
//         int x = n->data;
//         free(n);
//         return x;
//     }
// }

// int peek(int pos) {
//     struct Node *ptr = top;
//     for (int i = 0; (i < pos - 1 && ptr != NULL); i++) {
//         ptr = ptr->next;
//     }
//     if (ptr != NULL) {
//         return ptr->data;
//     } else {
//         return -1; // Return -1 if position is invalid
//     }
// }

// int main() {
//     push(28);
//     push(18);
//     push(15);
//     push(7);

//     linkedListTraversal(top);

//     for (int i = 1; i <= 4; i++) {
//         printf("Value at position %d is : %d\n", i, peek(i));
//     }

//     printf("Popped element: %d\n", pop());
//     linkedListTraversal(top);

//     return 0;
// }




 #include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL; 


int isEmpty() {
    return top == NULL;
}


void push(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}


int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    struct Node *temp = top;
    int poppedValue = temp->data;
    top = top->next;
    free(temp);
    return poppedValue;
}


int topValue() {
    return isEmpty() ? -1 : top->data;
}


void display() {
    struct Node *ptr = top;
    while (ptr) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    push(28);
    push(18);
    push(15);
    push(7);

    printf("Stack elements:\n");
    display();

    printf("Top element: %d\n", topValue());

    printf("Popped element: %d\n", pop());

    printf("Stack after pop:\n");
    display();

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int data) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;

    if (head == NULL) head = newNode; 
    else {
        struct Node* iterator = head;
        // Traverse to the end of the list 
        while(iterator -> next != NULL) {
            iterator = iterator -> next;
        }
        iterator -> next = newNode;
    }
    return head;
};

void Print(struct Node* p) {

    if (p == NULL) {
        printf("\n");
        return; // Exit Condition
    }
    Print(p -> next); // Recursive call
    printf("%d ", p -> data); // print the value in the node - reversly
    // Print(p -> next); // Recursive call
}

int main() {
    struct Node* head = NULL;
    head = Insert(head, 2); // Insert to end of the list 
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 6);
    head = Insert(head, 8);

    Print(head);
}











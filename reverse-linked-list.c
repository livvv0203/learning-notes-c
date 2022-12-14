#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next; // Pointer to node
};

struct Node* head;

struct Node* Reverse(struct Node* head) {
    struct Node* current, *prev, *next;
    current = head; // To store the current node
    prev = NULL; // Store address of previous node
    
    while(current != NULL) {
        // Traverse the list 
        next = current -> next;
        current -> next = prev;
        prev = current; 
        current = next;
    }
    head = prev;
    return head;
}

struct Node* Insert(struct Node* head, int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = NULL;

    if (head == NULL) head = temp;
    else {
        struct Node* temp1 = head;
        while(temp1 -> next != NULL) temp1 = temp1 -> next;
        temp1 -> next = temp;
    }
    return head;
}

void Print(struct Node* head) {
    while(head != NULL) {
        printf("%d ", head -> data);
        head = head -> next;
    }
}

int main() {

    struct Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    Print(head); // Original list
    head = Reverse(head);
    Print(head); // After reverse

    return 0;
}








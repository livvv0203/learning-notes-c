#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev; // to store address of prev node
};

struct Node* head; // pointer to head node, in global scope

struct Node* GetNewNode(int x) {
    // create a node in dynamic memory or heap
    // temp is the pointer point to the created Node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = x;
    newNode -> prev = NULL;
    newNode -> next = NULL;
    return newNode;
};

void InsertAtHead(int x) {
    // store the newNode
    struct Node* newNode = GetNewNode(x);
    if (head == NULL) {
        head = newNode; // empty list
        return;
    }
    // else, insert at the beginning
    head -> prev = newNode;
    newNode -> next = head;
    head = newNode;
};

void Print() {
    struct Node* temp = head;
    printf("Forward: ");
    while(temp != NULL) {
        printf("%d", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
};

void ReversePrint() {
    struct Node* temp = head;
    if (temp == NULL) return;

    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    // Traversing backward using prev pointer
    while(temp != NULL) {
        printf("%d", temp -> data);
        temp = temp -> prev;
    }
    printf("\n");
};

int main() {

    head = NULL;

    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();

}
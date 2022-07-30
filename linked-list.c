#include<stdio.h>
#include<stdlib.h>

// Inserting a node at the beginning 
struct Node {
    int data;
    struct Node* next; // stores address of the next node in linked list 
};

struct Node* Insert(struct Node* head, int x) {
    // 1) Create a node
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    // 2) dereference to access the fields of the node
    temp -> data = x; 
    // OR: (*temp).data = x;
    // insert from the beginning
    temp -> next = head;
    // 4) Make head node point to the new node (temp)
    head = temp; // head is the address, so as temp

    return head;
};

void Print(struct Node* head) {
    printf("List is: ");
    // traverse the link list 
    while(head != NULL) {
        printf(" %d", head -> data);
        head = head -> next;
    }
    printf("\n");
};

int main() {

    struct Node* head = NULL; // Points nowwhere - empty list 
    printf("How many numbers?\n");
    int n, i, x;
    // User will input n numbers 
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the number: \n");
        scanf("%d", &x);
        // Insert number x to the linked list 
        head = Insert(head, x);
        // Each time insert, print all value in the linked list 
        Print(head);
    }

    return 0;
}
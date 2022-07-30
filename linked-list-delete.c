#include<stdio.h>

// Delete a node from linked list

struct Node {
    int data; 
    struct Node* next; // To store address of the next node
};

struct Node* head; // Store address of the head node - first node in the list 

// Insert to the end of linkedlist    
void Insert(int data);

void Print() ;

// Delete a node at position n
void Delete(int n) {

    struct Node* temp1 = head;

    if (n == 1) {
        head = temp1 -> next; // head now point to the secone node
        free(temp1); // Free the first node
        return;
    }

    int i;
    // To delete n, first goto n - 1
    for (i = 0; i < n - 2; i++) {
        // if n = 3, this loop only execute once
        temp1 = temp1 -> next; 
    }
    // Now temp1 points to (n - 1)th node
    struct Node* temp2 = temp1 -> next; // nth Node
    temp1 -> next = temp2 -> next; // (n + 1) Node, link is fixed
    free(temp2); // delete temp2
}; 

int main() {

    head = NULL; // Empty List 
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); // 2, 4, 5, 6

    int n;
    scanf("%d", &n); // Ask which postion to delete
    Delete(n);
    Print();

    return 0;
}










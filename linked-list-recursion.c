#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}

struct Node* head;

// Pass address of the node as argument
void Reverse(struct Node* p) {
    if (p -> next == NULL) {
        head = p; // Head is reversed
        return; // This is the exit condition of recursion
    }
    Reverse(p -> next); // Recursive call
    // This will execute after the recursive call
    struct Node* q = p -> next;
    q -> next = p;
    p -> next = NULL;
}

int main() {

}







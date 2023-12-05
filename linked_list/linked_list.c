#include <stdio.h>
#include <stdlib.h>

// Create a node
struct node
{
    int value;
    struct node *next;
};

// Print the linked list value
void printLinkedlist(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p -> value);
        p = p -> next;
    }
}

int main()
{   
    // Initalize memory
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;

    // Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    // Assign value values
    one -> value = 1;
    two -> value = 2;
    three -> value = 3;
    four -> value = 4;

    // Connect nodes
    one -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = NULL;

    // Print the linked list values
    head = one;
    printLinkedlist(head);
}
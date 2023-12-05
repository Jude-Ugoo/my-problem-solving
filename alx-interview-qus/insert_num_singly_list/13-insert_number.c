#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: Pointer to the head of the list
 * @number: Number to insert
 * 
 * Return: Address of the new node, or Null if it failed
 */

listint_t * insert_node(listint_t **head, int number)
{
    listint_t *new_node , *current, *prev;

    // checks if the head pointer is NULL
    if (!head)
        return NULL;
    
    // allocate memory for the new node & retuen NULL on allocation fail
    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return NULL;
    
    // Initialize the new node
    new_node->n = number;
    new_node->next = NULL;

    // Initalize current and prev pointers
    current = *head;
    prev = NULL;

    // Traverse the list to find the correct position to insert the new node
    while (current && current->n < number)
    {
        prev = current;
        current = current->next;
    }

    // Insert the new node at the beginning of the list
    if (!prev)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        // Insert the new node between prev and current
        prev->next = new_node;
        new_node->next = current;
    }

    // Return the address of the new node
    return new_node;
}
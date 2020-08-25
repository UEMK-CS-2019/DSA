#include <stdio.h> 
#include <stdlib.h> 

/* Link list node */
struct Node { 
    int data; 
    struct Node* next; 
}; 

/* Function to get the alternate 
nodes of the linked list */
int sumAlternateNode(struct Node* head) 
{ 
    int count = 0; 
    int sum = 0; 

    while (head != NULL) { 

        // when count is even sum the nodes 
        if (count % 2 == 0) 
            sum += head->data; 

        // count the nodes 
        count++; 

        // move on the next node. 
        head = head->next; 
    } 
    return sum; 
} 

// Function to push node at head 
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 

// Driver code 
int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 

    /* Use push() function to construct 
    the below list 1 -> 5 -> 2 -> 4 -> 8 -> 6 */
    push(&head, 1); 
    push(&head, 5); 
    push(&head, 2); 
    push(&head, 4); 
    push(&head, 8); 
    push(&head, 6);

    printf("%d", sumAlternateNode(head)); 
    return 0; 
}

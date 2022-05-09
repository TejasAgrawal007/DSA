#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkListTraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocating the memory node for Link list in heap.
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link The First Node and Second Node.
    head->data = 7;
    head->next = second;

    // Link The second Node and third Node.
    second->data = 11;
    second->next = third;

    // Link The First Node and Second Node.
    third->data = 66;
    third->next = NULL;

    linkListTraversal(head);

    return 0;
}
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
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Insert At The Begining
struct Node *insertAtFirst(struct Node *head, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// Insert at Index
struct Node *insertAtIndex(struct Node *head, int data, int index)

{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *preNode, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = preNode->next;
    preNode->next = ptr;
    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocating the Memory to the linkList in Heap.

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link First Node linkList second.
    head->data = 7;
    head->next = second;

    // Link second Node linkList Third.
    second->data = 17;
    second->next = third;

    // Link second Node linkList Third.
    third->data = 27;
    third->next = NULL;

    // 1. Insert at First
    // head = insertAtFirst(head, 20);

    // 2. Insert at Index Number
    // head = insertAtIndex(head, 20, 2);

    // 3. Insert at END
    // head = insertAtEnd(head, 200);
    // linkListTraversal(head);

    // 3. Insert at END
    head = insertAfterNode(head, second, 200);
    linkListTraversal(head);

    return 0;
}
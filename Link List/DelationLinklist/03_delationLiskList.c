// Deletation In Link List

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

// 1. Delating The First Node Form The linkList
struct Node *delateFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// 2. Delate At a given Index from the linkList
struct Node *delateAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// 3. Delate The last Node
struct Node *delateAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}


// 4. Delating a Node with a Given Value form a linkList
struct Node * delateAtValue(struct Node*head, int value){
    struct Node *p = head;
    struct Node *q = head;

    while (q->data!=value && q->next != NULL)
    {
       p = p->next;
       q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocating the Dynamic Memory in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 17;
    second->next = third;

    third->data = 27;
    third->next = NULL;

    // 1. Delating The First Node
    // head = delateFirst(head);

    // 2. Delate at given Index
    // head = delateAtIndex(head, 1);

    // 3. Delate At End
    // head = delateAtEnd(head);

    // 4. Delating at value
    head = delateAtValue(head, 7);
    linkListTraversal(head);

    return 0;
}
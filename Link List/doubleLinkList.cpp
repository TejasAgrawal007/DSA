#include<iostream>
using namespace std;

class Node{
    
    public:
        int data;
        Node* prev;
        Node* next;
        
    public:
        //constructor
        Node(int d)
        {
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }
};

void print(Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head)
{
    int len = 0;
    Node* temp = head;
    
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, int d)
{
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
    }
    else 
    {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}


void insertAtTail(Node* &tail, int d)
{
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}


void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    
    while(count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    
    if(temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main()
{
    Node* n1 = new Node(100);
    Node* head = n1;
    Node* tail = n1;
    
    print(head);
    
    cout<<endl;
    insertAtHead(head, 50);
    insertAtTail(tail, 150);
    insertAtPosition(head, tail, 2, 120);
    cout<<"The Length -> "<<getLength(head)<<endl;
    print(head);
    
    
    
    
    return 0;
}

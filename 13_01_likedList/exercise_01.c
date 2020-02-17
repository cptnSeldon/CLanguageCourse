#include <stdlib.h>
#include <stdio.h>

//https://www.geeksforgeeks.org/generic-linked-list-in-c-2/

//STRUCTURE
typedef struct node
{
    struct node * next;
    int data;   //can contain any data type
} Node;

//FUNCTIONS
void push(Node ** head, int data)
{
    //memory allocation
    Node * newNode = (Node * ) malloc(sizeof(Node));
    newNode->data = data;

    if(* head == NULL)
    {
        newNode->next = NULL;
        * head = newNode;
    }
    else
    {
        newNode->next = * head;
        * head = newNode;
    }
}

void print(Node * head)
{
    Node * current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

//MAIN
int main(void)
{
    Node * list = NULL;

    push(&list, 1);
    push(&list, 2);

    print(list);


    return 0;
}
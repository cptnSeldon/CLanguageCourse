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
void pushNode(Node ** head, int data)
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

void removeNodes(Node ** head)
{
    Node * current = * head;

    while (current != NULL)
    {
        current = * head;
        * head = (* head)->next;
        free(current);
        current = * head;
    }
}

void showList(Node * head)
{
    Node * current = head;
    if(current == NULL)
    {
        printf("Empty list\n");
        return;
    }
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

    pushNode(&list, 1);
    pushNode(&list, 2);

    showList(list);

    removeNodes(&list);

    showList(list);

    return 0;
}
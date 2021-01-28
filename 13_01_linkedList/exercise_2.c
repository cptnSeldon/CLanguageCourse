#include <stdlib.h>
#include <stdio.h>

//STRUCTURES
typedef struct node
{
    int data;
    struct node * next;
} Node;

typedef struct list
{
    Node * head;
    Node * tail;
} List;

//FUNCTIONS
List * newList()
{
    List * list = (List *) malloc(sizeof(List));

    list->head = NULL;
    list->tail = NULL;

    return list;
}

void removeNodes(List * list)
{
    Node * current = list->head;

    while(current != NULL)
    {
        current = list->head;
        list->head = list->head->next;
        free(current);
        current = list->head;
    }
}

void freeList(List ** list)
{
    removeNodes(* list);
    free(* list);
    * list = NULL;
}

void showList(List * list)
{
    Node * current = list->head;

    if(current == NULL)
    {
        printf("Empty list\n");
        return;
    }
    while(current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}

void pushNode(List * list, int data)
{
    Node * node = (Node *) malloc(sizeof(Node));

    node->data = data;

    //if list is empty, add the first node
    if(list->head == NULL)
    {
        node->next = NULL;

        list->head = node;
        list->tail = node;
    }
    //if list is not empty, insert at list beginning
    else
    {
        node->next = list->head;
        list->head = node;
    }
}

void appendNode(List * list, int data)
{
    Node * node = (Node *) malloc(sizeof(Node));

    node->data = data;
    node->next = NULL;

    //if list is empty, add the first node
    // => exact same code as for 'insertAtListBeginning'
    if(list->head == NULL)
    {
        node->next = NULL;

        list->head = node;
        list->tail = node;
    }
    //if list is not empty
    else
    {
        list->tail->next = node;
        list->tail = node;
    }
}

void insertNode(List * list, int data)
{
    if(data > 0)
    {
        pushNode(list, data);
    }
    else if(data < 0)
    {
        appendNode(list, data);
    }
}
//MAIN
int main()
{
    List * list = NULL;
    list = newList();

    insertNode(list, 1);
    insertNode(list, 2);
    insertNode(list, -1);
    insertNode(list, -2);

    printf("List\n");
    showList(list);
    removeNodes(list);

    printf("\nAfter nodes removal\n");
    showList(list);
    freeList(&list);

    return 0;
}
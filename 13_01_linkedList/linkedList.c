#include <stdlib.h>
#include <stdio.h>

//https://www.cplusplus.com/reference/list/

typedef int dataType;

//STRUCTURES
typedef struct node
{
    dataType data;
    struct node * next;
} Node;

typedef struct list
{
    Node * head;
    Node * tail;
} List;

//FUNCTIONS
//1.    ADD NODE
//1.1   front
void push_front(List * list, dataType data)
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
//1.2   between head and tail
void insert(int index, Node * head, dataType value)
{
    
}
//1.3   back
void push_back(List * list, dataType data)
{
    Node * node = (Node *) malloc(sizeof(Node));

    node->data = data;
    node->next = NULL;

    //if list is empty, add the first node
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

//2.    REMOVE NODE
//2.1   front
void pop_front(List * list)
{
    Node * current = list->head;

    if(current != NULL)
    {
        current = list->head;
        list->head = list->head->next;
        free(current);
        current = list->head;
    }
}
//2.2   between head and tail
void erase(int index, List * list)
{
    
}
//2.3   back
void pop_back(List * list)
{
    if(list != NULL)
    {
        Node * temp = list->head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        list->tail = temp;
        temp = list->tail->next;
        list->tail->next = NULL;

        free(temp);
    }
}
//2.4   empty list
void empty_list(List * list)
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

//CREATE LIST
List * newList()
{
    List * list = (List *) malloc(sizeof(List));

    list->head = NULL;
    list->tail = NULL;

    return list;
}

//PRINT
void showList(List * list)
{
    Node * current = list->head;

    printf("\n");
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

//#region MAIN
int main()
{
    //1. create new list
    List * list = newList();

    //2. add node
    printf("ADD NODES\n");
    push_front(list, 2);
    showList(list);

    push_front(list, 1);
    showList(list);

    push_back(list, 3);
    showList(list);

    push_back(list, 4);
    showList(list);

    //3. remove node
    printf("\nREMOVE NODES\n");
    pop_front(list);
    showList(list);

    pop_front(list);
    showList(list);

    pop_back(list);
    showList(list);

    pop_back(list);
    showList(list);

    //empty_list(list);
    showList(list);

    return 0;
}
//#endregion MAIN
/*#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL, *tmp, *ttmp;

void createFirst()
{
    first = (struct Node *)malloc(sizeof(struct Node));
    if (!first)
    {
        printf("Memory Allocation Failed!");
        return;
    }
    printf("Enter Value: ");
    scanf("%d", &first->data);
    first->next = first;
}

void addNode()
{
    tmp = first;
    while (tmp->next != first)
        tmp = tmp->next;
    ttmp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Value: ");
    scanf("%d", &ttmp->data);
    ttmp->next = first;
    tmp->next = ttmp;
}

void printList()
{
    struct Node *current = first;
    if (first == NULL)
        return;

    do
    {
        printf("%d - ", current->data);
        current = current->next;
    } while (current != first);
    printf("DONE\n");
}

int main()
{
    createFirst();
    addNode();
    printList();
}*/



//ADDITION OF A NODE BEFORE FIRST NODE IN CIRCULAR LINKED LIST
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL, *tmp, *ttmp;
void createfirst()
{
    first struct 
    {

        /* data */
    };
    
}


//DELTE FIRST NODE 
//DELETE LAST NODE 
//SWAP 2ND ND 1ST NODE 
//SWAP 2ND ND 2ND LAST NODE 
//SWAP 1ST ND 2ND NODE 




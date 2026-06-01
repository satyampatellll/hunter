
 //addition of node before first node in circular linked list
 #include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* first = NULL, *tmp, *ttmp;
void createFirst(){
    first = (struct Node*)malloc(sizeof(struct Node));
    if(first==NULL){
        printf("Memory not allocated");
        return;

    }
    printf("Enter value:");
    scanf("%d",&first->data);
    first->next=first;
}
void addNodeBeforeFirst(){
    tmp=first;
    while(tmp->next!=first)
        tmp=tmp->next;
    ttmp=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter value:");
    scanf("%d",&ttmp->data);
    ttmp->next=first;
    tmp->next=ttmp;
    first=ttmp;
}
void printList(){
    struct Node* current=first;
    if(first==NULL)
        return;
    do{
        printf("%d - ",current->data);
        current=current->next;
    }while(current!=first);
    printf("DONE\n");
}
int main(){
    createFirst();
    addNodeBeforeFirst();
    printList();
}

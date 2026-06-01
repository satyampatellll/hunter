//ADDITION OF NORD BEFORE A GIVEN NORD USING LINKED LIST
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insert(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void display(Node* head) {
    Node* temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    Node* head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    display(head);
    return 0;
}
//adding nodes
#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = nullptr;

void Add_Before(int x, int y){
    if (!head) return;

    if (head->data == x) {
        node* P = new node;
        P->data = y;
        P->next = head;
        head = P;
        return;
    }

    node* temp = head;
    node* ttemp = nullptr;
    while (temp && temp->data != x){
        ttemp = temp;
        temp = temp->next;
    }

    if (!temp) return;

    node* P = new node;
    P->data = y;
    ttemp->next = P;
    P->next = temp;
}



//ADD A NODE AFTER A GIVEN DATA AFTER DOUBLE LINKLIST
/*#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
} *head, *tail, *temp, *p, *ttemp;
void Add_After(int x, int y)
{
    temp = head;
    while (temp != NULL && temp->data != x)
    {
        temp = temp->next;
    }
    if (temp != NULL)
    {
        p = new node;
        p->data = y;
        p->next = temp->next;
        p->prev = temp;
        if (temp->next != NULL)
        {
            temp->next->prev = p;
        }
        temp->next = p;
    }
}
int main()
{
    // Example usage:
    head = new node{1, NULL, NULL};
    tail = head;
    tail->next = new node{2, NULL, tail};
    tail = tail->next;
    tail->next = new node{3, NULL, tail};
    tail = tail->next;

    Add_After(2, 4); // Add node with data 4 after node with data 2

    // Print the list to verify
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}*/
/*
//ADD A NODE BEFORE A GIVEN DATA AFTER DOUBLE LINKLIST
#include <iostream>
using namespace std;
void Add_Before(int x, int y)
{
    temp = head;
    while (temp != NULL && temp->data != x)
    {
        temp = temp->next;
    }
    if (temp != NULL)
    {
        p = new node;
        p->data = y;
        p->next = temp;
        p->prev = temp->prev;
        if (temp->prev != NULL)
        {
            temp->prev->next = p;
        }
        else
        {
            head = p;
        }
        temp->prev = p;
    }
}
int main()
    {
        temp= temp -> next;
        ttemp = new node;
        ttemp->data;
        P = temp-> next;
        temp->next = ttemp ->xt;
        temp->next = ttemp;
        ttemp->next = P;
        P->prev = ttemp;
    }
}   */

/*
Void Dal_before(int x)
{
    temp=first;
    while(temp ->data !=x)
    {
        temp=temp->next;
        ttemp=temp->prev;
        P=ttemp->prev;
        P ->next=temp;
        temp->prev=P;
        ttemp -> next = ttemp ->prev = NULL;
        delete ttemp;
    }


*/

//ADD A NODE AT THE END OF DOUBLE LINKLIST

#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
    node *prev;
};
node *first = nullptr;
node *temp = nullptr;
node *P = nullptr;
node *ttemp = nullptr;

void swapSL()
{
    temp = first;
    while (temp -> next != NULL)
        temp = temp -> next;
    temp = temp -> prev;
    P = ttemp -> prev;
    P -> next = temp;
    temp -> next = ttemp;
    ttemp -> prev = temp;
    ttemp -> next = NULL;
}


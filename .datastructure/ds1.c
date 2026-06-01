#include<stdio.h>
void Del_first()
{
    temp=first;
    first=first->next;
    first->prev=NULL;
    temp->next=NULL;
    delete temp;
}
void Del_last()
{
    temp=last;
    last=last->prev;
    last->next=NULL;
    temp->prev=NULL;
    delete temp;
}
void Del_after(int x)
{
    temp=first;
    while(temp->data!=x)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
    {
        ttemp=temp->next;
        temp->next=ttemp->next;
        if(ttemp->next!=NULL)
        {
            ttemp->next->prev=temp;
        }
        ttemp->next=NULL;
        ttemp->prev=NULL;
        delete ttemp;
    }
}
void Del_before(int x)
{
    temp=first;
    while(temp->data!=x)
    {
        temp=temp->next;
    }
    if(temp!=NULL && temp->prev!=NULL)
    {
        ttemp=temp->prev;
        temp->prev=ttemp->prev;
        if(ttemp->prev!=NULL)
        {
            ttemp->prev->next=temp;
        }
        ttemp->next=NULL;
        ttemp->prev=NULL;
        delete ttemp;
    }
}

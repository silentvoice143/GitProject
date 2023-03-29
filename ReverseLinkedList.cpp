#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void traverse(node* head)
{
    if(head==NULL)
    return ;

    node* ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->next==NULL)
        cout<<ptr->data;
        else
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<endl;
    return;
}


node* reverse(node* head)
{
    if(head==NULL || head->next==NULL)
    return head;

    node* prev=NULL;
    node* curr=head;
    node* Nnext=head;

    while(curr!=NULL)
    {
        Nnext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Nnext;
    }
    cout<<endl;
    return prev;
}


int main()
{
    node* head;
    node* n1=new node(1);
    node* n2=new node(2);
    node* n3= new node(3);
    node* n4= new node(4);
    node* n5= new node(5);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    head=n1;

    traverse(head);

    head = reverse(head);

    traverse(head);

    head = reverse(head);

    head = frontAdd(head, 6);

    traverse(head);

    return 0;
}
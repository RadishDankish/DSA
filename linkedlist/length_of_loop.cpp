#include <bits/stdc++.h>
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }

    node(int val,node* next1)
    {
        data=val;
        next=next1;
    }

};

void insert(node* &head,int val)
{
    if(head==NULL)
    {
        head=new node(val);
    }
    else
    {
        node* temp = head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
    

        temp->next= new node(val);
    }
}

void del(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node* temp = head;
        while(temp->next->data!=val)
        {
            temp=temp->next;
        }

        node* temp2 = temp;

        temp2=temp2->next;
        temp->next=temp2->next;
        temp2->next=NULL;
    }
} 


void print(node* &head)
{
    node* temp= head;

    while(temp!=NULL)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void length_of_loop(node* &head)
{
    node* slow = head;
    node* fast = head;
    if(head == NULL)
    {
        return;
    }
    else
    {


        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;

            if(fast==slow)
            {
                break;
            }
        }
    }

    int count{0};

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next;
        count++;

        if(fast==slow)
        {
            break;
        }
    }

    std::cout<<count;

}



int main()
{

    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    head->next->next->next->next->next=new node(6);
    head->next->next->next->next->next->next=head->next->next;





    length_of_loop(head);
}
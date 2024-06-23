#include <bits/stdc++.h>

class node
{
    public:
    int data;
    node* prev;
    node* next;


    node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
    }

};

void insert(node* &head,int val)
{
    if(head==NULL)
    {
        head = new node(val);
    }
    else
    {
        node* temp= head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        node* temp2 = new node(val);

        temp2->prev=temp;
        temp->next=temp2;
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
        node* temp=head;

        while(temp->next->data!=val)
        {
            temp=temp->next;
        }

        node* temp2=temp->next;
        temp->next=temp2->next;
        temp2->next->prev=temp2->prev;
        temp2->next=NULL;
        temp2->prev=NULL;

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



void reverse(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node* temp= head;
        node * temp2 = temp->next;

        while(temp2!=NULL)
        {
            temp->next=temp->prev;
            temp->prev=temp2;
            temp=temp2;
            temp2=temp2->next;
        }

        temp->next=temp->prev;
        temp->prev=temp2;

        head=temp;
    }
}

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    node* head = NULL;

    for(int i{};i<n;i++)
    {
        insert(head,arr[i]);
    }

    reverse(head);

    print(head);



}
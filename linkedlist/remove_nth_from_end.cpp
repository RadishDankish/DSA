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


void print(node* &head)
{
    node* temp= head;

    while(temp!=NULL)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void remove(node* &head,int n)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
            
        node* slow = head;
        node* fast  =head;

        for(int i{};i<n;i++)
        {
            fast=fast->next;
        }

        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }

        node* temp2=slow;
        temp2=temp2->next;
        slow->next=slow->next->next;
        temp2->next=NULL;



    }
}


int main()
{
    int p{};
    std::cin>>p;

    int n{};
    std::cin>>n;

    std::vector<int> arr(n);


    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    node* head=NULL;

    for(int i{};i<n;i++)
    {
        insert(head,arr[i]);
    }

    remove(head,p);

    print(head);
}
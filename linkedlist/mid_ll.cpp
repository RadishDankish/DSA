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


node* midlle_node(node* &head)
{
    node* slow=head;
    node* fast=head;
    if(head==NULL)
    {
        ;
    }
    else
    {
        while(fast!=NULL && fast->next!=NULL )
        {
            fast=fast->next->next;
            slow=slow->next;
        }

        
    }
    return slow;
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

    node* head=NULL;

    for(int i{};i<n;i++)
    {
        insert(head,arr[i]);
    }

    

    std::cout<<midlle_node(head)->data;
}
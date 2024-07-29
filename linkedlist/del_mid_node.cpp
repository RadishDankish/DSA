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

void len(node* &head,int &temp)
{
    if(head==NULL)
    {
        temp=0;
        return;
    }
    else
    {
        node* iter = head;

        while(iter!=NULL)
        {
            iter=iter->next;
            temp++;
        }
    }

}

void delmid(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node* slow = head;
        node* fast = head;

        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            if(fast==NULL || fast->next==NULL)
            {
                break;
            }
            else
            {
                slow=slow->next;
            }
        }

        node* temp2 = slow;
        temp2=temp2->next;
        slow->next=slow->next->next;
        temp2=NULL;
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

    delmid(head);

    print(head);

}
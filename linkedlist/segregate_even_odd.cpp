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


void segregate(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node* odd_head=head->next;
        node* even = head;
        node* odd = head->next;

        while(even!=NULL && odd!=NULL && odd->next!=NULL && even->next!=NULL)
        {
            even->next=even->next->next;
            odd->next=odd->next->next;
            even=even->next;
            odd=odd->next;
        }

        if(odd==NULL)
        {
            even->next=odd_head;
        }
        else if(odd->next==NULL)
        {
            odd->next=odd_head;
        }

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

    segregate(head);

    print(head);

}
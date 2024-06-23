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


void detect_loop(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node* slow=head;
        node* fast=head;


        while(fast!=NULL && fast->next!=NULL)
        {

            fast=fast->next->next;
            slow=slow->next;

            if(fast==slow)
            {
                std::cout<<"true";
                break;
            }
            
        }

        if(fast==NULL || fast->next==NULL)
        {
            std::cout<<"false";
        }
    }
}

 
void make_loop(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node* temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
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


    // make_loop(head);

    detect_loop(head);


}
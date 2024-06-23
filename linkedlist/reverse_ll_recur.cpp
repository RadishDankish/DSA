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

node* reverse_ll(node* &head)
{
    if(head==NULL)
    {
        ;
    }
    
    else
    {

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

}
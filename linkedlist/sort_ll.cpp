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


node* merge(node* left,node* right)
{
    node* temp_head =NULL;
    node* temp_left = left;
    node* temp_right=right;
    while(temp_right!=NULL && temp_left!=NULL)
    {
        if(temp_left->data <= temp_right->data)
        {
            insert(temp_head,temp_left->data);
            temp_left=temp_left->next;
        }
        else
        {
            insert(temp_head,temp_right->data);
            temp_right=temp_right->next;
        }
    }

    while(temp_left!=NULL)
    {
        insert(temp_head,temp_left->data);
        temp_left=temp_left->next;
    }

    while(temp_right!=NULL)
    {
        insert(temp_head,temp_right->data);
        temp_right=temp_right->next;
    }

    return temp_head;
}

node* midlle_node(node* head)
{
    node* slow=head;
    node* fast=head;
    if(head==NULL || head->next==NULL)
    {
        return head;
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

node* merge_sort(node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    else
    {
        node* mid= midlle_node(head);
        node* lefthead = head;
        node* righthead = mid->next;
        mid->next=NULL;

        lefthead=merge_sort(lefthead);
        righthead=merge_sort(righthead);
        return merge(lefthead,righthead);
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

    head = merge_sort(head);

    print(head);

}


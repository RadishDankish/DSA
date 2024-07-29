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

node* reverse_ll(node* &head)
{

    node* temp=NULL;
    if(head==NULL)
    {
        ;
    }
    else
    {
        node* curr=head;
        node* front = head->next;
        node* back = NULL;

        while(front!=NULL)
        {
            curr->next=back;
            back=curr;
            curr=front;
            front=front->next;

        }

        curr->next=back;
        temp=curr;

    }

    return temp;
    

}


bool check_palindrome(node* &head)
{
    if(head==NULL)
    {
        ;
    }
    else
    {
        node* mid = midlle_node(head);

        node* mid_rev = reverse_ll(mid);


        node* temp_head = head;
        node* temp_tail = mid_rev;

        while(temp_head!=temp_tail && temp_head->next!=temp_tail)
        {
            if(temp_head->data!=temp_tail->data)
            {
                return false;
            }
            else
            {
                temp_head=temp_head->next;
                temp_tail=temp_tail->next;
            }


        }

    }

    return true;
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

    std::cout<<check_palindrome(head);



}
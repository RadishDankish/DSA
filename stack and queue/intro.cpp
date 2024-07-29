#include <bits/stdc++.h>

class stack
{
    int arr[1000];
    int top{-1};
    public:

    void push(int x)
    {
        top++;
        arr[top]=x;
    }

    void peek()
    {
        std::cout<<arr[top]<<"\n";
    }

    void pop()
    {
        top--;
    }

    void size()
    {
        std::cout<<top+1<<"\n";
    }    
};

class queue
{
    int arr[3];
    int start{};
    int end{};
    public:

    void push(int x)
    {
        arr[end]=x;
        end++;
        end=end%3;
    }

    void pop()
    {
        arr[start]=-1;
        start++;
        start=start%3;
    }

    void top()
    {
        std::cout<<arr[start]<<"\n";
    }
};



int main()
{   
}
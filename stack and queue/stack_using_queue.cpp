#include <bits/stdc++.h>

class queue
{
    int arr[100];
    int start{};
    int end{};

    public:

    void push(int x)
    {
        arr[end]=x;
        end++;
        end=end%100;
    }

    void pop()
    {
        start++;
        start=start%100;
    }

    void top()
    {
        std::cout<<arr[start]<<"\n";
    }
};

int main()
{
    queue a1;
    queue a2;
}
#include <bits/stdc++.h>


void swap(int &a, int &b)
{
    int temp{a};
    a=b;
    b=temp;
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

    int i{};
    int j{1};

    while(i<n && j<n)
    {
        while(arr[i]>0)
        {
            i+=2;
        }

        while(arr[j]<0)
        {
            j+=2;
        }

        swap(arr[i],arr[j]);

    }

    for(int i{};i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}
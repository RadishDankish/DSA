#include <bits/stdc++.h>

void swap(int &a,int &b)
{
    int temp{a};
    a=b;
    b=temp;
}

void bub_sort(std::vector<int> &arr,int n)
{
    int j{};

    while(j<n)
    {
        int i{};
        while(i<n-j-1)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }

            i++;
        }

        j++;

    }
}

int main()
{
    int n{};
    std::cin>>n;


    std::vector<int> a(n);

    for(int i{};i<n;i++)
    {
        std::cin>>a[i];
    }

    bub_sort(a,n);


    for(int i{};i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
}
#include <bits/stdc++.h>

void swap(int &a,int &b)
{
    int temp{a};
    a=b;
    b=temp;
}


void insert_sort(std::vector<int> &arr,int n)
{

    int j{1};

    while(j<n)
    {
        int i{};
        while(i<j)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j],arr[i]);
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

    insert_sort(a,n);


    for(int i{};i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
}
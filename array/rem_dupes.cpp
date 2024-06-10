#include <bits/stdc++.h>

int remove(std::vector<int> &arr,int n)
{
    int i{};
    int j{};

    while(i<n && j<n)
    {
        if(arr[i]==arr[j])
        {
            j++;
        }
        else if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
            j++;
        }
    }

    return i;

}

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> v(n);

    for(int i{};i<n;i++)
    {
        std::cin>>v[i];
    }

    int size{remove(v,n)};

    for(int i{};i<=size;i++)
    {
        std::cout<<v[i]<<" ";
    }

}
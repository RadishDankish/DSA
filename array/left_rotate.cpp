#include <bits/stdc++.h>


void leftrotate(std::vector<int> &arr,int n,int k)
{
    k=k%n;
    for(int j{};j<k;j++)
    {
    int temp{arr[0]};

    int i{};

    while(i<n-1)
    {
        arr[i]=arr[i+1];
        i++;
    }

    arr[n-1]=temp;
    }
}


int main()
{
    int n{};
    std::cin>>n;

    int k{};
    std::cin>>k;

    std::vector<int> v(n);

    for(int i{};i<n;i++)
    {
        std::cin>>v[i];
    }

    leftrotate(v,n,k);

    for(int i{};i<n;i++)
    {
        std::cout<<v[i]<<" ";
    }


}
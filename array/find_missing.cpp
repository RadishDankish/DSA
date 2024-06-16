#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }
    int k{};

    for(int i{1};i<=n;i++)
    {
        if((arr[i-1]^i)!=0)
        {
            std::cout<<(arr[i-1]-1)<<" ";
            k++;
            break;
        }
    }

    if(k==0)
    {
        std::cout<<n+1;
    }
    
}
#include <bits/stdc++.h>

int linear(std::vector<int> &arr,int n,int k)
{
    int i{};

    while(i<n)
    {
        if(arr[i]==k)
        {
            return i;
        }

        i++;
        
    }
    
    return -1;
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

    std::cout<<linear(v,n,k);


}
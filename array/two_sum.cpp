#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;


    int sum{};
    std::cin>>sum;


    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    std::map<int, int> mp;


    for(int i{};i<n;i++)
    {
        mp[arr[i]]=i;
    }

    for(int i{};i<n;i++)
    {
        int temp{sum-arr[i]};

        if(mp.find(temp)!=mp.end())
        {   
            std::cout<<mp[temp]<<" "<<i;
            break;
        }

    }

}
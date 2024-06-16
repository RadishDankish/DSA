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

    int i{};
    int min{INT_MAX};
    int profit{};

    while(i<n)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }

        if(profit<arr[i]-min)
        {
            profit=arr[i]-min;
        }

        i++;
    }

    std::cout<<profit;


}
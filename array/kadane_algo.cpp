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

    int max{INT_MIN};
    int sum{};
    int i{};


    while(i<n)
    {
        sum+=arr[i];

        if(sum>max)
        {
            max=sum;

        }

        if(sum<0)
        {
            sum=0;

        }

        i++;


    }   


    std::cout<<max; 

}
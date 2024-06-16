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

    int j{1};

    int number{arr[0]};

    while(j<n)
    {
        number=(arr[j]^number);   
        j++; 
    }

    std::cout<<number;
}
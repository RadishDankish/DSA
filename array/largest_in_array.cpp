#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> v(n);

    for(int i{};i<n;i++)
    {
        std::cin>>v[i];
    }

    int temp{v[0]};

    int j{1};
    while(j<n)
    {
        if(temp<v[j])
        {
            temp=v[j];
        }

        j++;
    }

    std::cout<<temp;



}
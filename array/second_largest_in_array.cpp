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
    int temp2{-1};

    int j{1};

    while(j<n)
    {
        if(temp2<v[j])
        {
            if(temp<v[j])
            {
            temp2=temp;
            temp=v[j];
            }
            else if(temp>v[j])
            {
                temp2=v[j];
            }
        }

        j++;
    }

    std::cout<<temp2;
}
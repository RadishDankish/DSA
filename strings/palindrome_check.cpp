#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    int lo{};
    auto hi{a.size()-1};

    int flag{};

    while(lo<hi)
    {
        if(a[lo]!=a[hi])
        {
            flag++;
            break;
        }
        lo++;
        hi--;
    }

    if(flag==1)
    {
        std::cout<<"no";
    }
    else
    {
        std::cout<<"yes";
    }
}
#include <bits/stdc++.h>

bool check_prime(int a)
{
    if(a%2==0 || a<2)
    {
        return false;
    }
    else if(a==2)
    {
        return true;
    }
    else
    {
        for(int i{3};i<a;i+=2)
        {
            if(a%i==0)
            {
                return false;
            }
        }

        return true;
    }
}

int main()
{
    std::string a;
    std::cin>>a;

    int flag{};

    int len{a.size()};

    for(int i{};i<len;i++)
    {
        if(i%2==0)
        {    
            if(int(a[i])%2!=0)
            {
                flag=1;
                std::cout<<"100";
                break;
            }
        }
        else
        {
            if(check_prime(int(a[i]))==false)
            {
                flag=1;
                std::cout<<"001";
                break;
            }
        }
    }

    if(flag==1)
    {
        std::cout<<"not good";
    }
    else
    {
        std::cout<<"good";
    }
}
#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    int fin{};
    int k{};
    while(k<a.size())
    {
        if((int(a[k])-int('0'))%2!=0)
        {
            fin=k;
        }
        k++;
    }

    if(fin!=0)
    {
        std::string temp=a.substr(0,fin+1);
        std::cout<<temp;
    }
    else
    {
        std::cout<<"NA";
    }
}
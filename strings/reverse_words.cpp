#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::getline(std::cin,a);

    int i{};

    std::string ans="";
    std::string temp="";

    while(i<a.size())
    {
        if(a[i]!=' ')
        {
            temp+=a[i];
        }
        else
        {
            ans=temp+" "+ans;
            temp="";
        }
        i++;

    }

    if(temp!="")
    {
        ans=temp+" "+ans;
    }


    std::cout<<ans;


}
#include <bits/stdc++.h>

int main()
{
    std::string s;
    std::string t;

    std::cin>>s;
    std::cin>>t;

    std::map<char,int> mp_s;
    std::map<char,int> mp_t;

    int i{};
    int j{};

    while(i<s.size())
    {
        mp_s[s[i]]+=1;
        i++;
    }

    while(j<t.size())
    {
        mp_t[t[j]]+=1;
        j++;
    }


    if(i!=j)
    {
        std::cout<<"false";
    }
    else
    {
        if(mp_s==mp_t)
        {
            std::cout<<"true";
        }
        else
        {
            std::cout<<"false";
        }
    }
}

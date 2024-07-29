#include <bits/stdc++.h>

int main()
{
    std::string s;
    std::string goal;

    std::cin>>s;
    std::cin>>goal;

    int i{};
    int j{};

    while(goal[j]!=s[0] && j<goal.size())
    {
        j++;
    }

    int flag{};
    while(i<s.size())
    {

        if(j==goal.size()-1)
        {
            if(goal[j]!=s[i])
            {
                flag=1;
                break;
            }
            else
            {
                i++;
                j=0;
            }
        }
        else if(goal[j]!=s[i])
        {
            flag=1;
            break;
        }
        else
        {
            i++;
            j++;
        }
    }

    if(flag==0)
    {
        std::cout<<"true";
    }
    else
    {
        std::cout<<"false";
    }
}
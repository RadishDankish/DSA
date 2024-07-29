#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    std::string temp="";

    int open{};
    int close{};

    int k{};
    while(k<a.size())
    {
        if(open-1==close && a[k]==')')
        {
            open=0;
            close=0;
        }
        else if(open==0)
        {
            open++;
        }
        else
        {
            if(a[k]=='(')
            {
                temp+=a[k];
                open++;
            }
            else if(a[k]==')' && open>1)
            {
                temp+=a[k];
                close++;
            }
        }
        k++;
    }

    std::cout<<temp;

    

}
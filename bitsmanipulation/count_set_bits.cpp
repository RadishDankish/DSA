#include <bits/stdc++.h>

std::string conve(int a)
{
    if(a==0)
    {
        return "0";
    }
    std::string temp="";

    while(a>1)
    {
        temp+=std::to_string(a%2);
        a=a/2;
    }
    
    temp+=std::to_string(1);

    reverse(temp.begin(),temp.end());

    return temp;

}

int main()
{
    int num{};
    std::cin>>num;

    std::string temp = conve(num);

    int count{};

    for(int i{};i<temp.size();i++)
    {
        if(temp[i]=='1')
        {
            count++;
        }
    }

    std::cout<<count;







}
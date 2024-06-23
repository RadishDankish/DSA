#include <bits/stdc++.h>

int main()
{
    std::string a;

    std::getline(std::cin,a);

    int left{};
    int right{};

    int len{a.length()};

    std::vector<int> arr;
    
    int i{};
    while(i<len)
    {
        if(left==right)
        {
            arr.push_back(i);
        }

        if(a[i]=='(')
        {
            left++;
        }
        else if(a[i]==')')
        {
            right++;
        }
        i++;

    }

    if(left==right)
    {
        arr.push_back(i);
    }

    int len2{arr.size()};
    int j{};

    std::string new_str="";

    for(int i{};i<len;i++)
    {
        if(arr[i])
        {
            
        }
    }

    std::cout<<a;
    


}
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

int conve_rev(std::string a)
{
    int n{a.size()};

    int temp{};

    for(int i{n-1};i>=0;i--)
    {
        temp+=(a[i]-'0')*pow(2,n-i-1);

    }

    return temp;


}

int set(int a,int i)
{
    return a|(1<<(i-1));
}

int main()
{
    int num{};
    std::cin>>num;

    std::cout<<(num|(num+1));


}
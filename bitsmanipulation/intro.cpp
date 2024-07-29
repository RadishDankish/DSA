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

int i_bit(int a,int n)
{
    return ((a>>n-1)&1);
}

int set(int a,int i)
{
    return a|(1<<(i-1));
}

int clear(int a,int i)
{
    return a&(~(1<<(i-1)));
}


void swap(int &a,int &b)
{
    a=a^b;
    b=b^a;
    a=a^b;
}

int main()
{
    int num{};
    std::cin>>num;

    int i{};
    std::cin>>i;

    std::cout<<i_bit(num,i)<<" ";
    std::cout<<set(num,i)<<" ";
    std::cout<<clear(num,i);






}
#include <bits/stdc++.h>

std::string conve(int a)
{
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

char i_bit(int a,int n)
{
    std::string temp = conve(a);

    return temp[temp.size()-n];
}

int set(int a,int i)
{
    std::string temp = conve(a);

    temp[temp.size()-i]='1';

    return conve_rev(temp);

}

void clear(int &a,int i)
{
    std::string temp = conve(a);

    temp[temp.size()-i]='0';

    a= conve_rev(temp);
}


bool check_set(int a,int i)
{

    if((a>>i)&1==1)
    {
        return true;
    }
    
    return false;
}

int main()
{
    int num{};
    std::cin>>num;

    std::string temp = conve(num);
    int size{temp.size()};

    int flag{};

    if(check_set(num,0)==true)
    {
        for(int i{1};i<size;i++)
        {
            if(check_set(num,i)==true)
            {   
                flag=1;
                break;
            }
        }
    }


    if(flag==0)
    {
        std::cout<<"YES\n";
    }
    else
    {
        std::cout<<"NO\n";
    }






}
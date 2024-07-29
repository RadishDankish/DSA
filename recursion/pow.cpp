#include <bits/stdc++.h>

double pow(double x, int n,double ans)
{
    if(n==0)
    {
        return 1.0;
    }
    else if(n==1)
    {
        return x;
    }
    else
    {
        return x*pow(x,n-1);
    }
}

int main()
{
    double x{};
    std::cin>>x;

    int n{};
    std::cin>>n;


    std::cout<<pow(x,n);
}
#include <bits/stdc++.h>


bool checksorted(std::vector<int> &arr,int n)
{
    int i{};

    while(i<n-1)
    {
        if(arr[i]<=arr[i+1])
        {
            i++;
        }
        else
        {
            return false;
        }
    }

    return true;
}


int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> v(n);

    for(int i{};i<n;i++)
    {
        std::cin>>v[i];
    }

    std::cout<<checksorted(v,n);


}
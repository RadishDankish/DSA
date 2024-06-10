#include <bits/stdc++.h>

void swap(int &a, int &b)
{
    int temp{a};
    a=b;
    b=temp;
}

void move(std::vector<int> &arr,int n)
{
    int i{};
    int j{};

    while(i<n && j<n)
    {
        if(arr[j]!=0)
        {
            j++;
        }
        else
        {
            i=j+1;
            while(arr[i]==0)
            {
                i++;
            }

            if(i<n)
            {
                swap(arr[j],arr[i]);
                j++;
            }
            
        }
    }
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

    move(v,n);

    for(int i{};i<n;i++)
    {
        std::cout<<v[i]<<" ";
    }

}
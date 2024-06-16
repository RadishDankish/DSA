#include <bits/stdc++.h>


void swap(int &a,int &b)
{
    int temp{a};
    a=b;
    b=temp;

}


int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int low{};
    int mid{};
    int hi{n-1};

    while(mid<=hi)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[hi]);
            hi--;
        }
    }



    for(int i{};i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }

}
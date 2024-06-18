#include <bits/stdc++.h>


void upper_bound(std::vector<int> &arr,int lo,int hi,int target,int &temp)
{
    if(lo<=hi)
    {   
        int mid{(lo+hi)/2};
        if(target<arr[mid])
        {
            temp=mid;
            upper_bound(arr,lo,mid-1,target,temp);
        }
        else if(target>=arr[mid])
        {
            upper_bound(arr,mid+1,hi,target,temp);
        }
    }
    else
    {
        return;
    }
}
int main()
{
    int target{};
    std::cin>>target;

    int n{};
    std::cin>>n;
    
    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int temp{n};

    upper_bound(arr,0,n-1,target,temp);
    std::cout<<arr[temp];


    
}
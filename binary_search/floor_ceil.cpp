#include <bits/stdc++.h>


void floor(std::vector<int> &arr,int lo,int hi,int target,int &temp)
{
    if(lo<=hi)
    {
        int mid{(lo+hi)/2};
        if(target<arr[mid])
        {
            floor(arr,lo,mid-1,target,temp);   
        }
        else if(target>=arr[mid])
        {
            temp=mid;
            floor(arr,mid+1,hi,target,temp);
        }
    }
    else
    {
        return;
    }
}

void ceil(std::vector<int> &arr,int lo,int hi,int target,int &temp)
{
    if(lo<=hi)
    {
        int mid{(lo+hi)/2};
        if(target<=arr[mid])
        {
            temp=mid;
            ceil(arr,lo,mid-1,target,temp);   
        }
        else if(target>arr[mid])
        {
            
            ceil(arr,mid+1,hi,target,temp);
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
    int temp2{n};

    floor(arr,0,n-1,target,temp);

    std::cout<<arr[temp]<<" ";

    ceil(arr,0,n-1,target,temp2);

    std::cout<<arr[temp2];

}

#include <bits/stdc++.h>

void peak(std::vector<int> &arr,int lo,int hi,int &temp)
{
    if(lo<=hi)
    {
        int mid{(lo+hi)/2};
        if(lo==hi)
        {
            temp=lo;
        }
        else if(mid == lo && arr[mid]>arr[mid+1])
        {
            temp = mid;
        }
        else if(mid==hi && arr[mid-1]<arr[mid])
        {
            temp=mid;
        }
        else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        {
            temp=mid;
        }
        else
        {
            if(arr[mid]<arr[mid+1])
            {
                peak(arr,mid+1,hi,temp);
            }
            else if(arr[mid]>arr[mid+1])
            {
                peak(arr,lo,mid-1,temp);
            }
        }

    }
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

    int temp{-1};

    peak(arr,0,n-1,temp);

    std::cout<<temp;
}
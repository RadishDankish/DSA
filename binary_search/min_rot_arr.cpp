#include <bits/stdc++.h>

void rot_arr(std::vector<int> &arr,int lo,int hi,int &temp)
{
    if(lo<=hi)
    {
        int mid{(lo+hi)/2};
        if(arr[lo]<=arr[mid])
        {   
            if(temp>arr[lo])
            {
                temp = arr[lo];
            }
            rot_arr(arr,mid+1,hi,temp);

        }
        else if(arr[mid]<=arr[hi])
        {
            if(temp>arr[mid])
            {
                temp=arr[mid];
            }
            rot_arr(arr,lo,mid-1,temp);
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

    int temp{INT_MAX};

    rot_arr(arr,0,n-1,temp);

    std::cout<<temp;


}
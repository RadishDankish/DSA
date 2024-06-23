#include <bits/stdc++.h>


void num(std::vector<int> &arr,int lo,int hi,int target,int &temp)
{
    if(lo<=hi)
    {
        int mid{(lo+hi)/2};
        if(target==arr[mid])
        {
            temp++;
            num(arr,lo,mid-1,target,temp);
            num(arr,mid+1,hi,target,temp);
        }
        else if(target>arr[mid])
        {
            num(arr,mid+1,hi,target,temp);
        }
        else if(target<arr[mid])
        {
            num(arr,lo,mid-1,target,temp);
        }
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

    int temp{};

    num(arr,0,n-1,target,temp);

    std::cout<<temp;


}
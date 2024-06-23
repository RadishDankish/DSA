#include <bits/stdc++.h>

void rot_arr(std::vector<int> &arr,int lo,int hi,int target,int &temp)
{
    if(lo<=hi)
    {
        int mid{(lo+hi)/2};
        if(target==arr[mid])
        {
            temp=mid;
        }
        else if(arr[lo]<arr[mid])
        {
            if(target<arr[mid] && target>=arr[lo])
            {
                rot_arr(arr,lo,mid-1,target,temp);
            }
            else
            {
                rot_arr(arr,mid+1,hi,target,temp);
            }
        }
        else if(arr[hi]>arr[mid])
        {
            if(target>arr[mid] && target<=arr[hi])
            {
                rot_arr(arr,mid+1,hi,target,temp);
            }
            else 
            {
                rot_arr(arr,lo,mid-1,target,temp);
            }
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

    rot_arr(arr,0,n-1,target,temp);

    std::cout<<temp;


}
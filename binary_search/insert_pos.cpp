#include <bits/stdc++.h>


void insert_pos(std::vector<int> &arr,int lo,int hi,int target,int &temp)
{
    if(lo<=hi)
    {
        int mid{(lo+hi)/2};
        if(target==arr[mid])
        {
            temp = mid;
        }
        else if(target<arr[mid])
        {
            temp =mid;
            insert_pos(arr,lo,mid-1,target,temp);
        }
        else if(target>arr[mid])
        {
            insert_pos(arr,mid+1,hi,target,temp);
        }
    }
    else
    {
        return;
    }
}


int main()
{
    int x{};
    std::cin>>x;

    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int temp{};
    insert_pos(arr,0,n-1,x,temp);

    std::cout<<temp;


}
#include <bits/stdc++.h>

int bin(std::vector<int> &arr,int lo,int hi,int target)
{
    int temp{};
    int mid{(hi+lo)/2};  

    if(target == arr[mid])
    {
        temp= mid;
    }
    else if(target>arr[mid])
    {
        temp= bin(arr,mid+1,hi,target);
    }
    else if(target<arr[mid])
    {
        temp= bin(arr,lo,mid-1,target);
    }

    return temp;

}

int main()
{
    int target{};
    std::cin>>target;

    int n{};
    std::cin>>n;

    std::vector<int> a(n);

    for(int i{};i<n;i++)
    {
        std::cin>>a[i];
    }

    int temp{bin(a,0,n-1,target)};
    std::cout<<temp;


}
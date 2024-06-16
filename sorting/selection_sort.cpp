#include <bits/stdc++.h>



void swap(int &a,int &b)
{
    int temp{a};
    a=b;
    b=temp;
}


void selection_sort(std::vector<int> &arr,int n)
{


    int j{};

    while(j<n)
    {
        int i{j};
        int min{j};

        while(i<n)
        {
            if(arr[min]>arr[i])
            {
                min=i;
            }
            i++;
        }

        swap(arr[min],arr[j]);
        j++;
    }
}


int main()
{   
    int n{};
    std::cin>>n;


    std::vector<int> a(n);

    for(int i{};i<n;i++)
    {
        std::cin>>a[i];
    }

    selection_sort(a,n);

    for(int i{};i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }



}
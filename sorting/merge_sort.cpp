#include <bits/stdc++.h>


void swap(int &a,int &b)
{
    int temp{a};
    a=b;
    b=temp;
}

void merge(std::vector<int> &arr,int start, int mid,int end)
{   
    if(start>=end)
    {
        return;
    }


    else {
        int i{start};
        int j{mid+1};
        int k{};

        std::vector<int> temp(end-start+1);


        while(i<mid+1 && j<=end)
        {
            if(arr[i]<=arr[j])
            {
                temp[k]=arr[i];
                i++;
            }
            else
            {
                temp[k]=arr[j];
                j++;
            }
            k++;

        }

        while(i<mid+1)
        {
            temp[k]=arr[i];
            i++;
            k++;
        }

        while(j<end)
        {
            temp[k]=arr[j];
            j++;
            k++;
        }

        for(int i{};i<end;i++)
        {
            arr[i]=temp[i];
        }
    }
}   


void merge_sort(std::vector<int> &arr, int start,int end)
{

    if(start==end)
    {
        return;
    }

    else
    {
        int mid = (start)+(end-start)/2;

        merge_sort(arr,start,mid);

        merge_sort(arr,mid+1,end);

        merge(arr,start,mid,end);
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

    merge_sort(a,0,n-1);




    for(int i{};i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
}
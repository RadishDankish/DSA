#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;


    int sum{};
    std::cin>>sum;


    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int j{};
    int k{};

    int temp_sum{arr[0]};

    int length{};

    while(j<n && k<n)
    {

            if(temp_sum<sum)
            {
                temp_sum+=arr[k];
                k++;
            }
            else if(temp_sum==sum)
            {
                if(length<k-j+1)
                {
                    length=k-j+1;
                }
                temp_sum+=arr[k+1];
                temp_sum-=arr[j];
                j++;
                k++;

            }
            else
            {
                temp_sum-=arr[j];
                j++;
            }
        
    }


    std::cout<<length;

}
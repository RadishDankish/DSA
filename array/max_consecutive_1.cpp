#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }


    int max_one{};
    int one{};

    int j{};



    while(j<n)
    {
        if(arr[j]==1)
        {
            one++;
        }
        else if(arr[j]==0)
        {

            if(max_one<one)
            {
                max_one=one;
            }
            one=0;
        }

        j++;
    }

    if(max_one<one)
    {
        max_one=one;
    }

    std::cout<<max_one;



}
#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<std::string> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int i{};
    int j{};

    std::string comm="";

    while(i<arr[0].size() && j<arr[1].size())
    {
        if(arr[0][i]==arr[1][j])
        {
            comm+=arr[0][i];
            i++;
            j++;
        }
        else
        {
            break;
        }
    }   

    int k{2};
    while(k<n)
    {
        int p{};
        while(p<arr[k].size() && p<comm.size())
        {
            if(arr[k][p]==comm[p])
            {
                p++;
            }
            else
            {
                comm=comm.substr(0,p);
                break;
            }
        }

        if(comm.size()==0)
        {
            break;
        }
        k++;
    }


    std::cout<<comm;
}
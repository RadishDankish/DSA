#include <bits/stdc++.h>

// int main()
// {
//     int n{};
//     std::cin>>n;

//     std::vector<int> arr(n);

//     for(int i{};i<n;i++)
//     {
//         std::cin>>arr[i];
//     }

//     std::map<int,int> mp;

//     for(int i{};i<n;i++)
//     {
//         mp[arr[i]]+=1;
//     }

//     for(auto it=mp.begin();it!=mp.end();it++)
//     {
//         if(it->second>(n/2))
//         {
//             std::cout<<it->first;
//         }
//     }
// } 


int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int count{};
    int elem{};

    int i{};

    while (i<n)
    {   
        if(count==0)
        {
            elem=arr[i];
            count++;
        }
        else
        {
            if(elem==arr[i])
            {
                count++;
            }
            else
            {
                count--; 
            }
        
        }

        i++;

    }

    count=0;
    i=0;

    while(i<n)
    {
        if(arr[i]==elem)
        {
            count++;
        }

        i++;
        
    }

    if(count>(n/2))
    {
        std::cout<<elem;
    }


}
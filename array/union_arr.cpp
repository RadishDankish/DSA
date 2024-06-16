#include <bits/stdc++.h>

void uni(std::vector<int> &arr1,std::vector<int> &arr2,int n1,int n2)
{

}


int main()
{
    int n1{};
    std::cin>>n1;

    int n2{};
    std::cin>>n2;

    std::vector<int> v1(n1);
    std::vector<int> v2(n2);

    for(int i{};i<n1;i++)
    {
        std::cin>>v1[i];
    }

    for(int i{};i<n2;i++)
    {
        std::cin>>v2[i];
    }


    std::map<int,int> mp;

    int i{};
    int j{};

    while(i<n1)
    {
        if(mp.count(v1[i])==0)
        {
            mp[v1[i]]=1;
        }
        i++;
    }

    while(j<n2)
    {
        if(mp.count(v2[j])==0)
        {
            mp[v2[j]]=1;
        }
        j++;
    }

    int n{mp.size()};

    std::vector<int> v(n);

    int p{};

    for(auto t =mp.begin();t!=mp.end();t++)
    {
        v[p]=t->first;
        p++;
    }

    for(int k{};k<n;k++)
    {
        std::cout<<v[k]<<" ";
    }
    
    

}
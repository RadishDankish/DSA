#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    std::string b;
    std::cin>>b;

    std::vector<int> hash_a(26);
    std::vector<int> hash_b(26);

    int i{};

    while(i<a.size())
    {
        hash_a[int(a[i])-97]++;
        hash_b[int(b[i])-97]++;
        i++;
    }

    std::sort(hash_a.begin(),hash_a.end());
    std::sort(hash_b.begin(),hash_b.end());

    if(hash_a==hash_b)
    {
        std::cout<<"true";
    }
    else
    {
        std::cout<<"false";
    }

}
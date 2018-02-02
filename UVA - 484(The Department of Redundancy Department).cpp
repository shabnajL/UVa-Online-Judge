#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    map<int,int>mp;
    vector<int>v;
    while(cin>>x)
    {
        if(mp.count(x) == 0)
        {
            mp[x] = 1;
            v.push_back(x);
        }
        else{
            mp[x]++;
        }

    }
    for(int i=0; i<v.size(); i++)
    {
        printf("%d %d\n",v[i],mp[v[i]]);
    }
    return 0;
}

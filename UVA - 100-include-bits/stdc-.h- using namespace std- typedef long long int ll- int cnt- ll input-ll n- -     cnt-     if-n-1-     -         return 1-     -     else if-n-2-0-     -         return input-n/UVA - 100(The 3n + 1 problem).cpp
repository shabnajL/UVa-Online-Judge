#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int cnt;
ll input(ll n)
{
    cnt++;
    if(n==1)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return input(n/2);
    }
    else
    {
        return input(3*n+1);
    }
}
int main()
{
    ll i,j,p,q;
    while(cin>>i>>j)
    {
        p = i;q = j;
        
        if(i>j)
        {
            swap(i,j);
        }
        ll mx = -1;
        for(int a=i;a<=j;a++)
        {
            cnt = 0;
            input(a);
            if(mx<cnt)
            {
                mx = cnt;
            }
        }
        printf("%lld %lld %lld\n",p,q,mx);
    }
    return 0;
}

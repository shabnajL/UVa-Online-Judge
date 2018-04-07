#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int cnt;
ll ackermann(ll n)
{
    if(n==1)
    {
        return 1;
    }
    cnt++;
    if(n%2==0)
    {
        return ackermann(n/2);
    }
    else
    {
        return ackermann(3*n+1);
    }
}
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        if(a==1 && b==1)
        {
            cnt = 3;
            printf("Between %lld and %lld, %lld generates the longest sequence of %d values.\n",a,b,a,cnt);
        }
        else{
        if(a>b)
        {
            swap(a,b);
        }
        ll mx = -1,p = 0;
        for(int i=a;i<=b;i++)
        {
            cnt = 0;
            ackermann(i);
            if(mx<cnt)
            {
                mx = cnt;
                p = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,p,mx);
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int cnt;
ll ackermann(ll n)
{
    if(n==1)
    {
        return 1;
    }
    cnt++;
    if(n%2==0)
    {
        return ackermann(n/2);
    }
    else
    {
        return ackermann(3*n+1);
    }
}
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        if(a==1 && b==1)
        {
            cnt = 3;
            printf("Between %lld and %lld, %lld generates the longest sequence of %d values.\n",a,b,a,cnt);
        }
        else{
        if(a>b)
        {
            swap(a,b);
        }
        ll mx = -1,p = 0;
        for(int i=a;i<=b;i++)
        {
            cnt = 0;
            ackermann(i);
            if(mx<cnt)
            {
                mx = cnt;
                p = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,p,mx);
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int cnt;
ll ackermann(ll n)
{
    if(n==1)
    {
        return 1;
    }
    cnt++;
    if(n%2==0)
    {
        return ackermann(n/2);
    }
    else
    {
        return ackermann(3*n+1);
    }
}
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        if(a==1 && b==1)
        {
            cnt = 3;
            printf("Between %lld and %lld, %lld generates the longest sequence of %d values.\n",a,b,a,cnt);
        }
        else{
        if(a>b)
        {
            swap(a,b);
        }
        ll mx = -1,p = 0;
        for(int i=a;i<=b;i++)
        {
            cnt = 0;
            ackermann(i);
            if(mx<cnt)
            {
                mx = cnt;
                p = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,p,mx);
        }
    }
    return 0;
}

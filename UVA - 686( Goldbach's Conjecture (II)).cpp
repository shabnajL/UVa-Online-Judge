#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
typedef long long int ll;
ll Prime[32773],nPrime = 0;
bool mark[32773];
int sieve(int n)
{
    int i,j, limit = sqrt(n) + 2;
    mark[1] = 1;
    int x = n;
    for(i=4; i<=n; i+=2)
    {
        mark[i] = 1;
    }

    Prime[nPrime++] = 2;
    for(i=3; i<=n; i++)
    {
        if(mark[i] == 0)
        {
            Prime[nPrime++] = i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=(i*2))
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
int main()
{
    sieve(32773);
    ll N,i;
    while(cin>>N)
    {
        if(N==0){
            break;
        }
        ll cnt = 0;
        for(i=0;Prime[i]<=N/2;i++)
        {
            ll x = Prime[i];
            if(mark[N-x]==0)
            {
                cnt++;
            }
        }
        if(cnt == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%lld\n",cnt);
        }
    }
    return 0;
}



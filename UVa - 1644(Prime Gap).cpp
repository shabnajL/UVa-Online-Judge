// UVA - 1644 ( PRIME GAP )//
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
typedef long long int ll;
ll Prime[1299715],nPrime = 0;
bool mark[1299715];
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
    sieve(1299715);
    ll N,i;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        ll n = N;
        if(mark[N]==0)
        {
            printf("0\n");
        }
        else
        {
            while(mark[N]!=0)
            {
                N++;
            }
            while(mark[n]!=0)
            {
                n--;
            }
            printf("%lld\n",N-n);
        }

    }
    return 0;
}

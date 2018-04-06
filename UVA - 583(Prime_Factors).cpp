#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
int factor[300];
int ck;
void sieve(ll n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(mark[i] == 0)
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
void prime_factor (ll n)
{
    ck = 0;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        while(n % prime[i] == 0)
        {
           factor[ck++] = prime[i];
            n = n / prime[i];
        }
    }
    if(n > 1)
    {
        factor[ck++] = n;
    }
    for(int i = 0; i < ck-1; i++)
    {
        printf("%d x ", factor[i]);
    }
    printf("%d", factor[ck-1]);
    printf("\n");
}
int main()
{
    sieve(100000);
    ll n;
    while(cin >> n)
    {
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            printf("%lld = \n",n);
        }
        else if(n==-1)
        {
            printf("%lld = -1 x \n",n);
        }
        else{
           printf("%lld = ",n);
            if(n<0)
            {
                printf("-1 x ");
                n = (-1 * n );
            }
            prime_factor(n);
        }



    }
}

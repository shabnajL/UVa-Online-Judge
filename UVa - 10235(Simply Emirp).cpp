#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
typedef long long int ll;
ll pr(ll n)
{
    ll i,sq = sqrt(n);
    for(i=2; i<=sq; i++){
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
ll rev(ll n)
{
    ll sum = 0;
    while(n>0){
        sum = sum * 10 + n%10;
        n = n/10;
    }
    return sum;
}

int main()
{
    ll N,X,sum;
    while(cin>>N)
    {
        X = N;
        sum = rev(N);
        if(X==sum && pr(X)==1){
            printf("%lld is prime.\n",X);
        }
        else{
            if(pr(X)==1 && pr(sum)==1){
                printf("%lld is emirp.\n",X);
            }
            else if(pr(X)==1 && pr(sum)==0){
                printf("%lld is prime.\n",X);
            }
            else{
                printf("%lld is not prime.\n",X);
            }
        }
    }
    return 0;
}

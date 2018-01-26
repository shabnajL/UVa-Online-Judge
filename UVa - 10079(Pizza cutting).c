#include<stdio.h>
int main()
{
    long long int n = 0,sum;
    while(scanf("%lld",&n) == 1)
    {
        if(n<0)
        {
            break;
        }
        sum = ((n*(n+1))/2);
        printf("%lld\n",sum +1);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    long long int s,o,diff;
    while(scanf("%lld %lld",&s,&o) == 2)
    {
        if(o>s){
        printf("%lld\n",o - s);
        }
        else{
            printf("%lld\n",s - o);
        }

    }
    return 0;
}

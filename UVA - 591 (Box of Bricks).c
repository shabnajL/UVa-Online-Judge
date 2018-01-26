#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,j = 1,h[1000],i,S = 0;
    while(scanf("%d",&n) == 1)
    {
        if(n ==0 )
        {
            break;
        }
        int sum = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
            sum += h[i];
        }
        S = sum / n;
        int add = 0;
        for(i=0;i<n;i++)
        {
            if(h[i] > S)
            {
                int res = abs(S - h[i]);
                add += res;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,add);
        j++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int A[1000],i,j,k,N,h,r,P,T;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        scanf("%d",&P);
        for(j=0;j<P;j++)
        {
            scanf("%d",&A[j]);
        }
        int count = 0;
        for(k=1;k<=N;k++)
        {
            if(k%7 == 0 || k%7 == 6)
            {
                continue;
            }
            int flag = 0;
            for(j=0;j<P;j++)
            {
                if(k%A[j] == 0)
                {
                    flag = 1;
                }
            }
            if(flag == 1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

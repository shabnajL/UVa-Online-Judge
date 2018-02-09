#include<bits/stdc++.h>
using namespace std;
int sum_digit(int n,int sum)
{
    while(n!=0)
    {
        int r = (n%10);
        sum = sum + (r*r);
        n = n/10;
    }

    return sum;
}
int main()
{
    int T,n,r,N;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>n;
        N = n;
        int sum = 0;
        while(1)
        {
            sum = sum_digit(n,sum);
            if(sum/10==0)
                break;
            else
            {
                n=sum;
                sum=0;
            }
        }
        if(sum == 1)
        {
        printf("Case #%d: %d is a Happy number.\n",t+1,N);
        }
        else{
            printf("Case #%d: %d is an Unhappy number.\n",t+1,N);
        }

    }
    return 0;
}

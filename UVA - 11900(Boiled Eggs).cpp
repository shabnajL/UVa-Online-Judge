#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T,n,P,Q,i,j,W;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>n>>P>>Q;
        int nW = 0,count = 0;
        for(j=0;j<n;j++)
        {
            cin>>W;
            nW += W;
            if(nW<=Q)
            {
                count++;
            }
        }
        if(count >= P)
        {
            printf("Case %d: %d\n",i,P);
        }
        else
        {
            printf("Case %d: %d\n",i,count);
        }
    }
    return 0;
}


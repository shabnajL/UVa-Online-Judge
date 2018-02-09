#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,n;
    long long int a[105][105];
    char s,ch;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>ch>>s;
        cin>>n;
        for(int i =0 ;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int f = 0;
        for(int i =0 ;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]<0)
                {
                    f = 1;
                    break;
                }
                if(a[i][j]!=a[n-1-i][n-1-j]){
                    f = 1;
                    break;
                }
            }
        }
        if(f==1)
        {
            printf("Test #%lld: Non-symmetric.\n",t+1);
        }
        else{
            printf("Test #%lld: Symmetric.\n",t+1);
        }

    }
    return 0;
}

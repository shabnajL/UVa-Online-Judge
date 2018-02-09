#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    for(int t =0; t<75;t++)
    {
        cin>>n;
        if(n==0)
            break;
        int eq =0,cnt1 = 0,cnt2 = 0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0)
            {
                cnt1 = cnt1 + 1;
            }
            else
            {
                cnt2 = cnt2 + 1;
            }
            eq = cnt1 - cnt2;
        }

        printf("Case %d: %d\n",t+1,eq);
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    double d,u,v;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>d>>v>>u;
        double mnT,mnD,s,P;
        s = (u*u - v*v);

        if(u==v || (s<=0))
        {
            printf("Case %d: can't determine\n",t+1);
        }
        else
        {
            mnT = d / u;
            mnD = d / sqrt(s) ;
            if(mnT==mnD)
            {
                printf("Case %d: can't determine\n",t+1);
            }
            else
            {
                P = (mnD - mnT);
                printf("Case %d: %.3lf\n",t+1,P);
            }

        }
    }
    return 0;
}

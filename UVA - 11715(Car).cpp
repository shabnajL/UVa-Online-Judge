#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T  = 0,x;
    while(cin>>x)
    {
        T++;
        double u,v,a,s,t;
        if(x==0)
        {
            break;
        }
        if(x==1)
        {
            cin>>u>>v>>t;
            a = (v-u) / t;
            s = ( ( u*t) + (.5 * a * t * t) );
            printf("Case %d: %.3lf %.3lf\n",T,s,a);
        }
        else if(x==2)
        {
            cin>>u>>v>>a;
            t = (v-u) / a;
            s = ( ( u*t) + (.5 * a * t * t) );
            printf("Case %d: %.3lf %.3lf\n",T,s,t);
        }
        else if(x==3)
        {
            cin>>u>>a>>s;
            v = sqrt(u*u + 2*a*s);
            t = (v-u) / a;
            printf("Case %d: %.3lf %.3lf\n",T,v,t);
        }
        else if(x==4)
        {
            cin>>v>>a>>s;
            u = sqrt(v*v - 2*a*s);
            t = (v-u) / a;
            printf("Case %d: %.3lf %.3lf\n",T,u,t);
        }


    }

    return 0;
}




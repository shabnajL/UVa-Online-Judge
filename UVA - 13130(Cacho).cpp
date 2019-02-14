#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int T,a,b,c,d,e;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>a>>b>>c>>d>>e;
        int cnt =0;
        if(a==b-1)
        {
            if(b==c-1)
            {
                if(c==d-1)
                {
                    if(d==e-1)
                    {
                        cnt++;
                    }
                }
            }
        }
        if(cnt==1)
        {
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }

}


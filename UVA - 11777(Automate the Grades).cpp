#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int t1,t2,f,a,ct1,ct2,ct3,ct;
        cin>>t1>>t2>>f>>a>>ct1>>ct2>>ct3;
        if(ct1>ct2 && ct3>ct2)
        {
            ct = (ct1+ct3) / 2;
        }
        else if(ct1>ct3 && ct2>ct3)
        {
            ct = (ct1+ct2) / 2;
        }
        else if(ct2>ct1 && ct3>ct1)
        {
            ct = (ct3+ct2) / 2;
        }
        else if(ct1==ct2 && ct3>ct1)
        {
            ct = (ct3+ct1) / 2;
        }
        else if(ct1==ct3 && ct2>ct1)
        {
            ct = (ct1+ct2) / 2;
        }
        else if(ct2==ct3 && ct1>ct2)
        {
            ct = (ct1+ct2) / 2;
        }
        else if(ct1==ct2 && ct3==ct2)
        {
            ct = (ct1+ct2) / 2;
        }
        int res = t1 + t2 + f + a + ct;
        if(res>=90)
        {
            printf("Case %d: A\n",t+1);
        }
        else if(res>=80 && res<90)
        {
            printf("Case %d: B\n",t+1);
        }
        else if(res>=70 && res<80)
        {
            printf("Case %d: C\n",t+1);
        }
        else if(res>=60 && res<70)
        {
            printf("Case %d: D\n",t+1);
        }
        else if(res<60)
        {
            printf("Case %d: F\n",t+1);
        }


    }

    return 0;
}



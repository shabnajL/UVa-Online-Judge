#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    string s;
    cin>>T;
    for(int t = 0;t<T;t++)
    {
        cin>>n;
        int flag = 0;
        int cntb = 0,cntw = 0,cntt = 0,cnta = 0;
        char ch;
        for(int i =0;i<n;i++)
        {
            cin>>ch;
            if(ch=='B'){
               cntb = cntb + 1;
            }
            else if(ch=='W'){
               cntw = cntw + 1;
            }
            else if(ch=='T'){
               cntt = cntt + 1;
            }
            else if(ch=='A')
            {
                cnta = cnta + 1;
            }
        }
        if(cnta==n)
        {
            printf("Case %d: ABANDONED\n",t+1);
        }
        else if(cntb==n || cntb+cnta==n){
            printf("Case %d: BANGLAWASH\n",t+1);
        }
        else if(cntw==n || cntw+cnta==n){
            printf("Case %d: WHITEWASH\n",t+1);
        }
        else if(cntb==cntw){
            printf("Case %d: DRAW %d %d\n",t+1,cntb,cntt);
        }
        else if(cntb>cntw){
            printf("Case %d: BANGLADESH %d - %d\n",t+1,cntb,cntw);
        }
        else if(cntw>cntb){
            printf("Case %d: WWW %d - %d\n",t+1,cntw,cntb);
        }

    }
    return 0;
}


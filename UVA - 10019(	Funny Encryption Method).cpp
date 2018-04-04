#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>n;
        int x = n;
        int cnt1 = 0;
        while(n>0)
        {
            int r = n % 2;
            if(r==1)
            {
                cnt1 = cnt1 + 1;
            }
            n = n / 2;
        }
        int n2 = 0,j=1;
        while(x>0)
        {
            int r = x % 10;
            n2 = n2 + (r*j);
            j = j*16;
            x = x / 10;
        }
        int cnt2 = 0;
        while(n2>0)
        {
            int r = n2 % 2;
            if(r==1)
            {
                cnt2 = cnt2 + 1;
            }
            n2 = n2 / 2;
        }

        cout<<cnt1<<' '<<cnt2<<endl;

    }
    return 0;
}



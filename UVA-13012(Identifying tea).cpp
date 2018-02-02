#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,x;
    while(cin>>T)
    {
        int cnt = 0;
        for(int i=0;i<5;i++)
        {
            cin>>x;
            if(x==T)
            {
                cnt = cnt + 1;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}

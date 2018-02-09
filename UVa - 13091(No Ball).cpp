#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    string s[1005];
    cin>>T;
    for(int t=0;t<T;t++)
    {
        for(int i=0;i<5;i++)
        {
            cin>>s[i];
            if(s[0][i] == '|'){
                n = i;
            }
        }
        for(int i =0;i<5;i++)
        {
            for(int j =0;j<5;j++)
            {
                if(s[i][j]=='>')
                {
                    if(j>n){
                        printf("Case %d: No Ball\n",t+1);
                    }
                    else{
                        printf("Case %d: Thik Ball\n",t+1);
                    }
                }
                if(s[i][j]=='<')
                {
                    if(j<n){
                        printf("Case %d: No Ball\n",t+1);
                    }
                    else{
                        printf("Case %d: Thik Ball\n",t+1);
                    }
                }
            }
        }

    }

    return 0;
}

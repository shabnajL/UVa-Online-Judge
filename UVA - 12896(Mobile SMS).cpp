#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[15];
    s[0] = " ";
    s[1] = ".,?\"";
    s[2] = "abc";
    s[3] = "def";
    s[4] = "ghi";
    s[5] = "jkl";
    s[6] = "mno";
    s[7] = "pqrs";
    s[8] = "tuv";
    s[9] = "wxyz";
    int T,L,N[105],P[105];
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>L;
        for(int i=0;i<L;i++)
        {
            cin>>N[i];
        }

        for(int i=0;i<L;i++)
        {
            cin>>P[i];
        }
        for(int i=0;i<L;i++)
        {
            int x = N[i];
            int y = P[i];
            cout<<s[x][y-1];
        }
        cout<<endl;

        memset(N,0,sizeof(N));
        memset(P,0,sizeof(P));

    }
    return 0;
}

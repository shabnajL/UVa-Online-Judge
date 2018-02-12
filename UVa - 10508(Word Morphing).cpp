#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,l,cnt;
    string ss[1005],s,s1;
    while(cin>>w>>l)
    {
        cin>>s;
        for(int i=1;i<w;i++)
        {
            cin>>s1;
            cnt = 0;
            for(int j = 0;j<l;j++)
            {
                if(s[j]!=s1[j])
                {
                    cnt = cnt + 1;
                }
                ss[0] = s;
            }
            ss[cnt] = s1;

        }
        for(int i = 0; i < w; i++)
        {
            cout<< ss[i]<< endl;
        }
        s.clear();
        s1.clear();
        //ss.clear();

    }
    return 0;
}


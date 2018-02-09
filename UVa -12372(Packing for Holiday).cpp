#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,l,w,h;
    string s;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
        {
            printf("Case %d: good\n",t+1);
        }
        else
        {
            printf("Case %d: bad\n",t+1);
        }
    }
    return 0;
}




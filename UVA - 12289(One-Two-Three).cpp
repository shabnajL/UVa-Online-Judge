#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[7];
    s[0] = "one";
    s[1] = "two";
    s[2] = "three";
    int T,cnt1 = 0,cnt2 = 0,cnt3 = 0;
    string N,P[9];
    cin>>T;
    for(int t=0; t<T; t++)
    {

        cin>>N;

        /*for(int i=0;i<N.size();i++)
        {
            cout<<N[i];
        }*/
        for(int i=0; i<N.size(); i++)
        {
            if((N[0]==s[0][0] && N[1]==s[0][1]) || (N[0]==s[0][0] && N[2]==s[0][2]) || (N[1]==s[0][1] && N[2]==s[0][2]) )
            {
                cnt1=1;
            }
            else if((N[0]==s[1][0] && N[1]==s[1][1]) || (N[0]==s[1][0] && N[2]==s[1][2]) || (N[1]==s[1][1] && N[2]==s[1][2]) )
            {
                cnt2=1;
            }
            else if((N[0]==s[2][0] && N[1]==s[2][1]) || (N[0]==s[2][0] && N[2]==s[2][2]) || (N[1]==s[2][1] && N[2]==s[2][2]) )
            {
                cnt3=1;
            }
        }
        if(cnt1==1)
        {
            cout<<"1";
            cnt1 = 0;
        }
        if(cnt2==1)
        {
            cout<<"2";
            cnt2 = 0;
        }
        if(cnt3==1)
        {
            cout<<"3";
            cnt3 = 0;
        }
        cout<<endl;

        N.clear();
        //memset(P,0,sizeof(P));

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,B,a[105];
    set<int>st;
    vector<int>v;
    while(cin>>N>>B)
    {
        if(N==0 && B==0)
            break;
        for(int b=0;b<B;b++)
        {
            cin>>a[b];
        }
        int f = 0;
        for(int i=0;i<B;i++)
        {
            for(int j=i;j<B;j++)
            {
                st.insert(abs(a[i]-a[j]));
                f = 1;
            }
        }
        if(f==1)
        {
            if(st.size()==N+1)
            {
                cout<<"Y"<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }
        }
        st.clear();

    }
    return 0;
}

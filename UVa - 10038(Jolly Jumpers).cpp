#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,a[10005];
    set<long long int>st;
    vector<int>v;

    while(cin>>N)
    {
        for(int i =0;i<N;i++)
        {
            cin>>a[i];
        }
        long long int x = 0;
        for(int i=0;i<N;i++)
        {
            x = abs(a[i] - a[i+1]);
            st.insert(x);
        }
        set<long long int> :: iterator it;
        int f = 0;
        for(it=st.begin();it!=st.end();it++)
        {
            if(*it<N)
            {
                f++;
            }
        }
        if(f==N-1)
        {
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }
        st.clear();
    }


    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,sp,hp;
    set<string>st;
    while(getline(cin,s))
    {
        st.insert(s);
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                sp = s.substr(i,j);
                st.insert(sp);
            }
        }
        set<string>::iterator it;
        int cnt = 0;
        for(it=st.begin(); it!=st.end(); it++)
        {
            if(*it==" ")
            {
                continue;
            }
            hp = *it;
            reverse(hp.begin(),hp.end());
            if(hp==*it)
            {
                cnt = cnt + 1;
            }
        }
        printf("The string '");
        cout<<s;
        printf("' contains %d palindromes.\n",cnt-1);
        s.clear();
        sp.clear();
        hp.clear();
        st.clear();
    }

    return 0;
}

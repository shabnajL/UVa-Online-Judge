#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int N;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            N = s[i];
            char c = N-7;
            cout<<c;
        }
        cout<<endl;
        s.clear();
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        long long int l = s.size();
        if(s=="0")
        {
            break;
        }
        long long int x = 0;
        for(int i = 0; i<s.size(); i++)
        {
            x = x + ( (s[i] - 48) * ( pow(2,l) - 1 ) );
            l--;
        }
        cout<<x<<endl;
    }
    s.clear();
    return 0;
}




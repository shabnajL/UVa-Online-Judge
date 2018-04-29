#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isalph(string s)
{
    bool f = false;
    for(int i=0; i<s.size(); i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            f = true;
        }
    }
    return f;
}
int main()
{
    string s,s1;
    while(getline(cin,s))
    {
        istringstream ss(s);
        int cnt = 0;
        while(ss>>s1)
        {
            if(isalph(s1)){
                cnt = cnt + 1;
            }
        }
        cout<<cnt<<endl;
        s.clear();
        s1.clear();
    }
    return 0;
}



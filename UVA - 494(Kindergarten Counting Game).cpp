#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
/*bool isalph(string s)
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
}        */
int main()
{
    string s,s1;
    while(getline(cin,s))
    {
        int cnt = 0,f = 0;
        /*
        istringstream ss(s);
        while(ss>>s1)
        {
            if(isalph(s1)){
                cnt = cnt + 1;
            }
        }*/
        for(int i=0;s[i];i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){

                f = 1;
            }
            else{
                cnt = cnt + f;
                f = 0;
                

            }
        }
        cnt += f;
        cout<<cnt<<endl;
        s.clear();
        s1.clear();
    }
    return 0;
}



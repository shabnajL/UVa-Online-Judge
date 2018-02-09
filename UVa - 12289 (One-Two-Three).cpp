#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,k;
    string s;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>s;
        if(s.size()==3)
        {
            if( (s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e')){
                cout<<"1"<<endl;
            }
            else if( (s[0]=='t' && s[1]=='w') || (s[0]=='t' && s[2]=='o') || (s[1]=='w' && s[2]=='o')){
                cout<<"2"<<endl;
            }
        }
        else if(s.size()==5)
        {
            cout<<"3"<<endl;
        }

    }
    return 0;
}



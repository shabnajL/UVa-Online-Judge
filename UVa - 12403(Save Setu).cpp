#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,k;
    string s;
    int sum = 0;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>k;
            sum = sum + k;
        }
        else if(s=="report")
        {
            cout<<sum<<endl;
        }

    }
    return 0;
}


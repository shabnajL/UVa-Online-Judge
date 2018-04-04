#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    vector<int>v;

    for(int t=0;t<100;t++)
    {
        cin>>n;
        if(n<0)
        {
            break;
        }
        if(n==0)
        {
            cout<<"0";
        }
        while(n>0)
        {
            int r = n % 3;
            v.push_back(r);
            n = n / 3;
        }
        reverse(v.begin(),v.end());
        for(int i =0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    vector<long long int>v;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        long int cnt = 0;
        while(n>0)
        {
            long long int r = n % 2;
            v.push_back(r);
            if(r==1)
            {
                cnt = cnt + 1;
            }
            n = n / 2;
        }
        reverse(v.begin(),v.end());
        printf("The parity of ");
        for(int i =0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        printf(" is %ld (mod 2).\n",cnt);
        v.clear();
    }
    return 0;
}



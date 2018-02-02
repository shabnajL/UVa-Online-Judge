#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p;
    while(cin>>p){
        long long int cnt = 0;
        if(p==1)
        {
            cnt  = 0;
        }

        while(p>1){
            if(p%2==1)
            {
                cnt++;
                p--;
            }
            if(p%2==0)
            {
                cnt = cnt + (p/2);
            }
            p /=2;
        }
        cout<<cnt<<endl;

    }
    return 0;
}

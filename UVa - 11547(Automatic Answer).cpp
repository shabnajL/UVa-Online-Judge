#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T, n, res1, res2, res3, remainder, Res;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>n;
        res1 = ( (n * 567) / 9 );
        res2 = ( (res1 + 7492) * 235 );
        res3 = ( (res2 / 47) - 498 );
        Res = abs( (res3 % 100) / 10);
        cout<<Res<<endl;
    }

    return 0;
}

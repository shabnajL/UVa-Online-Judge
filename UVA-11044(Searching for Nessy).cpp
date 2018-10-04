#include<iostream>
using namespace std;
int main()
{
    int T,n,m,res;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        res = 0;
        cin>>n>>m;
        double a = n/3;
        double b = m/3;
        res = a*b;
        cout<<res<<endl;
    }
    return 0;
}

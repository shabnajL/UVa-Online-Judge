#include<bits/stdc++.h>
using namespace std;
long long int perfect_square(long long int n)
{
    if(n>=0)
    {
        long long int x = sqrt(n);
        return x*x == n;
    }
    return 0;
}
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(perfect_square(n))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

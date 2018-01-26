#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int x,n1,n2;
    while(scanf("%lld %lld",&n1,&n2) == 2)
    {
        x = n1 ^ n2;
        cout<<x<<endl;
    }
}

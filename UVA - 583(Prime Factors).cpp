#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;
int Prime[1000],nPrime = 0;
bool mark[1000];
vector<int>v;
int sieve(int n)
{
    int i,j, limit = sqrt(n) + 2;
    mark[1] = 1;
    int x = n;
    for(i=4; i<=n; i+=2)
    {
        mark[i] = 1;
    }

    Prime[nPrime++] = 2;
    for(i=3; i<=n; i++)
    {
        if(mark[i] == 0)
        {
            Prime[nPrime++] = i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=(i*2))
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
void factor(int n)
{
    int x = n;
    printf("%d = ",x);
    for(int i =0;Prime[i]<=n/2;i++)
    {
        printf("value of PRIME[i] = \n",Prime[i]);
        while(n%Prime[i]==0)
        {
            v.push_back(Prime[i] == 0);
            n = n/Prime[i];
            cout<<n<<' ';
        }
    }
}
int main()
{
    sieve(1005);
    int n;
    while(cin>>n)
    {
        if(mark[n]==1)
        {
            cout<<"go to factor(n)"<<endl;
            factor(n);
        }
        else
        {
            printf("%d = %d\n",n,n);
        }
    }
    return 0;
}


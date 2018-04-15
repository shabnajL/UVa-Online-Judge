#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int x,y,r1,r2;
    while(cin>>x>>y)
    {
        if(x==0 && y==0)
        {
            break;
        }
        int sum = 0,cnt = 0,carry = 0;
        while(1)
        {
            if(x==0 && y==0){break;}
            r1 = x % 10;
            r2 = y % 10;
            sum = r1 + r2;
            if(sum+carry>9)
            {
                cnt = cnt + 1;
                carry = 1;
            }
            else{carry = 0;}
            x = x / 10;
            y = y / 10;
        }
        if(cnt==0)
        {
            printf("No carry operation.\n");
        }
        else if(cnt==1)
        {
            printf("1 carry operation.\n");
        }
        else{
            printf("%ld carry operations.\n",cnt);
        }
    }
    return 0;
}

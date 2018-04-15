#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        int s,d,x,y;
        cin>>s>>d;

        int sum = s+d;
        if(sum%2==0)
        {
            x = (sum / 2);
            y = s - x;
            if(x>=0 && y>=0)
            {
                if(x<y)
                {
                    swap(x,y);
                }
                printf("%d %d\n",x,y);
            }
            else
            {
                printf("impossible\n");
            }
        }
        else
        {
            printf("impossible\n");
        }
    }
}


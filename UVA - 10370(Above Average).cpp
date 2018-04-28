#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int c;
    cin>>c;
    for(int t=0;t<c;t++)
    {
        double n,x,sum = 0,arr[10005];
        double ave;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum = sum + x;
            arr[i] = x;
        }
        ave = sum / n;
        double cnt = 0;
        for(int i=0;i<n;i++)
        {
           if(arr[i]>ave)
           {
               cnt = cnt + 1;
           }
        }
        double res = ( (cnt/n) * 100 );
        printf("%.3lf",res);
        cout<<"%"<<endl;

    }
    return 0;
}

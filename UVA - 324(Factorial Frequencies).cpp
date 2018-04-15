#include <bits/stdc++.h>
using namespace std;
int f[367][785];
void fun()
{
    f[0][0] = 1;
    f[1][0] = 1;

    for(int i = 2; i < 367; i++)
    {
        for(int j = 0; j < 785; j++)
        {
            f[i][j] = f[i][j] + f[i - 1][j] * i;
            if(f[i][j] > 9)
            {
                f[i][j + 1] = f[i][j] / 10;
                f[i][j] %= 10;
            }
        }
    }

}
int main()
{
    fun();
    int n;
    while(cin >> n)
    {
        if(n==0)
        {
            break;
        }

        int cnt;
        for(cnt = 785 - 1; cnt >= 0; cnt--)
        {
            if(f[n][cnt] != 0)
                break;
        }
        cout<<n<<"! --"<<endl;
        int cnt0 = 0,cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0,cnt5 = 0,cnt6 = 0,cnt7 = 0,cnt8 = 0,cnt9 = 0;
        for(int i = cnt; i >= 0; i--)
        {
            if(f[n][i]==0)
            {
                cnt0++;
            }
            else if(f[n][i]==1)
            {
                cnt1++;
            }
            else if(f[n][i]==2)
            {
                cnt2++;
            }
            else if(f[n][i]==3)
            {
                cnt3++;
            }
            else if(f[n][i]==4)
            {
                cnt4++;
            }
            else if(f[n][i]==5)
            {
                cnt5++;
            }
            else if(f[n][i]==6)
            {
                cnt6++;
            }
            else if(f[n][i]==7)
            {
                cnt7++;
            }
            else if(f[n][i]==8)
            {
                cnt8++;
            }
            else if(f[n][i]==9)
            {
                cnt9++;
            }

        }
        cout<<"   (0)    "<<cnt0;
        cout<<"    (1)    "<<cnt1;
        cout<<"    (2)    "<<cnt2;
        cout<<"    (3)    "<<cnt3;
        cout<<"    (4)    "<<cnt4<<endl;
        cout<<"   (5)    "<<cnt5;
        cout<<"    (6)    "<<cnt6;
        cout<<"    (7)    "<<cnt7;
        cout<<"    (8)    "<<cnt8;
        cout<<"    (9)    "<<cnt9<<endl;


    }


}


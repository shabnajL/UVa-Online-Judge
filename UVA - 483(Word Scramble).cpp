#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    string s,s1,sp;
    int i;
    while(getline(cin,s))
    {
        istringstream sp(s);
        int f = 0;
        while(sp>>s1)
        {
            reverse(s1.begin(),s1.end());
            if(f == 1)
            {
                cout<<' ';
            }
            cout<<s1;
            f = 1;
        }

        cout<<endl;
    }

    return 0;
}

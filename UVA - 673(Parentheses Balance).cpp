#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<stack>
using namespace std;
int main()
{
    int n,i,j;
    string s;
    scanf("%d",&n);
    getchar();
    for(j = 0; j<n; j++)
    {
        getline(cin,s);
        stack<char>st;
        for(i=0; i<s.size(); i++)
        {
            if(st.size()>0 && (s[i]==')' && st.top()=='('))
            {
                st.pop();
            }
            else if(st.size()>0 && (s[i]==']' && st.top()=='['))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }

        }
        if(st.size() == 0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        s.clear();
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    queue<int>q;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            q.push(i+1);
        }
        printf("Discarded cards:");
        while(q.size()>1)
        {
            if(q.size()==2)
            {
                printf(" %d",q.front());
            }
            else{
                printf(" %d,",q.front());
            }
            q.pop();
            int x = q.front();
            q.push(x);
            q.pop();
        }
        cout<<endl;
        printf("Remaining card: ");
        while(q.size()>0){
           cout<<q.front();
           q.pop();
        }
        cout<<endl;
    }

    return 0;
}



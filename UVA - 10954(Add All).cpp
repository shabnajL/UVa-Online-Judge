#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    priority_queue< int,vector<int>,greater<int> >pq; //
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            int q;
            cin>>q;
            pq.push(q);
        }

        long int total,cost = 0;
        while(pq.size()>1)
        {
            total = 0;
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            total = x+y;
            pq.push(total);
            cost = cost +total;

        }
        cout<<cost<<endl;
        pq.pop();
    }

    return 0;
}


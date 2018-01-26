#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n;
    while(cin>>m>>n){
        map<string,long long int>mp;
        string s;
        int x;
        for(int i = 0;i<m;i++){
            cin>>s>>x;
            mp[s] = x;
        }
        while(n--){
            string s1;
            int sum = 0;
            while(cin>>s1){
                if(s1 == ".")
                    break;
                if(mp.find(s1) != mp.end()){
                    sum = sum + mp[s1];
                }
            }
            cout<<sum<<endl;
        }
    }
     return 0;

}

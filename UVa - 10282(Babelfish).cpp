#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<string,string>mp;
    while(getline(cin,s))
    {
        if(s.size()==0)
            break;
        string s1;
        istringstream ss(s);
        vector<string>vs;
        while(ss>>s1)
        {
            vs.push_back(s1);
        }
        mp[vs[1]] = vs[0];
        vs.clear();
    }
    string s2;
    while(cin>>s2)
    {
        if(mp.find(s2) != mp.end()){
            cout<<mp[s2]<<endl;
        }
        else{
            cout<<"eh"<<endl;
        }
    }
    mp.clear();
    return 0;
}

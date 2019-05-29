#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[15];
    s[0] = "-";
    s[1] = "01";
    s[2] = "ABC";
    s[3] = "DEF";
    s[4] = "GHI";
    s[5] = "JKL";
    s[6] = "MNO";
    s[7] = "PQRS";
    s[8] = "TUV";
    s[9] = "WXYZ";
    string N;
    while(cin>>N)
    {

/*
        for(int i=0;i<N.size();i++)
        {
            cout<<N[i];
        }cout<<endl<<endl;
*/
        for(int i=0;i<N.size();i++)
        {
           if(N[i]==s[0][0] || N[i]==s[1][0] || N[i]==s[1][1])
            {
                printf("%c",N[i]);
            }
            else if(N[i]==s[2][0] || N[i]==s[2][1] || N[i]==s[2][2]){
               printf("2");
            }
            else if(N[i]==s[3][0] || N[i]==s[3][1] || N[i]==s[3][2]){
               printf("3");
            }
            else if(N[i]==s[4][0] || N[i]==s[4][1] || N[i]==s[4][2]){
               printf("4");
            }
            else if(N[i]==s[5][0] || N[i]==s[5][1] || N[i]==s[5][2]){
               printf("5");
            }
            else if(N[i]==s[6][0] || N[i]==s[6][1] || N[i]==s[6][2]){
               printf("6");
            }
            else if(N[i]==s[7][0] || N[i]==s[7][1] || N[i]==s[7][2] || N[i]==s[7][3]){
               printf("7");
            }
            else if(N[i]==s[8][0] || N[i]==s[8][1] || N[i]==s[8][2]){
               printf("8");
            }
            else if(N[i]==s[9][0] || N[i]==s[9][1] || N[i]==s[9][2] || N[i]==s[9][3]){
               printf("9");
            }

        }
        cout<<endl;
N.clear();
        //memset(N,0,sizeof(N));
        //memset(P,0,sizeof(P));

    }
    return 0;
}

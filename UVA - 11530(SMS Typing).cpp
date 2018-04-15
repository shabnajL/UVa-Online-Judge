#include <bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   getchar();
   for(int t=0;t<T;t++)
   {
       string s;
       getline(cin,s);
        int cnt = 0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='a'){cnt = cnt + 1;}
           else if(s[i]=='b'){cnt = cnt + 2;}
           else if(s[i]=='c'){cnt = cnt + 3;}
           else if(s[i]=='d'){cnt = cnt + 1;}
           else if(s[i]=='e'){cnt = cnt + 2;}
           else if(s[i]=='f'){cnt = cnt + 3;}
           else if(s[i]=='g'){cnt = cnt + 1;}
           else if(s[i]=='h'){cnt = cnt + 2;}
           else if(s[i]=='i'){cnt = cnt + 3;}
           else if(s[i]=='j'){cnt = cnt + 1;}
           else if(s[i]=='k'){cnt = cnt + 2;}
           else if(s[i]=='l'){cnt = cnt + 3;}
           else if(s[i]=='m'){cnt = cnt + 1;}
           else if(s[i]=='n'){cnt = cnt + 2;}
           else if(s[i]=='o'){cnt = cnt + 3;}
           else if(s[i]=='p'){cnt = cnt + 1;}
           else if(s[i]=='q'){cnt = cnt + 2;}
           else if(s[i]=='r'){cnt = cnt + 3;}
           else if(s[i]=='s'){cnt = cnt + 4;}
           else if(s[i]=='t'){cnt = cnt + 1;}
           else if(s[i]=='u'){cnt = cnt + 2;}
           else if(s[i]=='v'){cnt = cnt + 3;}
           else if(s[i]=='w'){cnt = cnt + 1;}
           else if(s[i]=='x'){cnt = cnt + 2;}
           else if(s[i]=='y'){cnt = cnt + 3;}
           else if(s[i]=='z'){cnt = cnt + 4;}
           else if(s[i]==' '){cnt = cnt + 1;}

       }

        printf("Case #%d: %d\n",t+1,cnt);
   }


}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
        for(int i =0;i<s.size();i++)
        {
            if(s[i]==' '){cout<<" ";}
            else if(s[i] == 'e'){cout<<"q";}
            else if(s[i] == 'r'){cout<<"w";}
            else if(s[i] == 't'){cout<<"e";}
            else if(s[i] == 'y'){cout<<"r";}
            else if(s[i] == 'u'){cout<<"t";}
            else if(s[i] == 'i'){cout<<"y";}
            else if(s[i] == 'o'){cout<<"u";}
            else if(s[i] == 'p'){cout<<"i";}
            else if(s[i] == '['){cout<<"o";}
            else if(s[i] == ']'){cout<<"p";}
            else if(s[i] == '\\'){cout<<"[";}

            else if(s[i] == 'd'){cout<<"a";}
            else if(s[i] == 'f'){cout<<"s";}
            else if(s[i] == 'g'){cout<<"d";}
            else if(s[i] == 'h'){cout<<"f";}
            else if(s[i] == 'j'){cout<<"g";}
            else if(s[i] == 'k'){cout<<"h";}
            else if(s[i] == 'l'){cout<<"j";}
            else if(s[i] == ';'){cout<<"k";}
            else if(s[i] == '\''){cout<<"l";}


            else if(s[i] == 'c'){cout<<"z";}
            else if(s[i] == 'v'){cout<<"x";}
            else if(s[i] == 'b'){cout<<"c";}
            else if(s[i] == 'n'){cout<<"v";}
            else if(s[i] == 'm'){cout<<"b";}
            else if(s[i] == ','){cout<<"n";}
            else if(s[i] == '.'){cout<<"m";}
            else if(s[i] == '/'){cout<<",";}

            else if(s[i] == '2'){cout<<"`";}
            else if(s[i] == '3'){cout<<"1";}
            else if(s[i] == '4'){cout<<"2";}
            else if(s[i] == '5'){cout<<"3";}
            else if(s[i] == '6'){cout<<"4";}
            else if(s[i] == '7'){cout<<"5";}
            else if(s[i] == '8'){cout<<"6";}
            else if(s[i] == '9'){cout<<"7";}
            else if(s[i] == '0'){cout<<"8";}
            else if(s[i] == '-'){cout<<"9";}
            else if(s[i] == '='){cout<<"0";}


        }
        cout<<endl;
    return 0;
}



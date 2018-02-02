#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        for(int i =0;i<s.size();i++)
        {
            if(s[i]==' '){cout<<" ";}
            else if(s[i] == 'W'){cout<<"Q";}
            else if(s[i] == 'E'){cout<<"W";}
            else if(s[i] == 'R'){cout<<"E";}
            else if(s[i] == 'T'){cout<<"R";}
            else if(s[i] == 'Y'){cout<<"T";}
            else if(s[i] == 'U'){cout<<"Y";}
            else if(s[i] == 'I'){cout<<"U";}
            else if(s[i] == 'O'){cout<<"I";}
            else if(s[i] == 'P'){cout<<"O";}
            else if(s[i] == '['){cout<<"P";}
            else if(s[i] == ']'){cout<<"[";}
            else if(s[i] == '\\'){cout<<"]";}

            else if(s[i] == 'S'){cout<<"A";}
            else if(s[i] == 'D'){cout<<"S";}
            else if(s[i] == 'F'){cout<<"D";}
            else if(s[i] == 'G'){cout<<"F";}
            else if(s[i] == 'H'){cout<<"G";}
            else if(s[i] == 'J'){cout<<"H";}
            else if(s[i] == 'K'){cout<<"J";}
            else if(s[i] == 'L'){cout<<"K";}
            else if(s[i] == ';'){cout<<"L";}
            else if(s[i] == '\''){cout<<";";}


            else if(s[i] == 'X'){cout<<"Z";}
            else if(s[i] == 'C'){cout<<"X";}
            else if(s[i] == 'V'){cout<<"C";}
            else if(s[i] == 'B'){cout<<"V";}
            else if(s[i] == 'N'){cout<<"B";}
            else if(s[i] == 'M'){cout<<"N";}
            else if(s[i] == ','){cout<<"M";}
            else if(s[i] == '.'){cout<<",";}
            else if(s[i] == '/'){cout<<".";}

            else if(s[i] == '1'){cout<<"`";}
            else if(s[i] == '2'){cout<<"1";}
            else if(s[i] == '3'){cout<<"2";}
            else if(s[i] == '4'){cout<<"3";}
            else if(s[i] == '5'){cout<<"4";}
            else if(s[i] == '6'){cout<<"5";}
            else if(s[i] == '7'){cout<<"6";}
            else if(s[i] == '8'){cout<<"7";}
            else if(s[i] == '9'){cout<<"8";}
            else if(s[i] == '0'){cout<<"9";}
            else if(s[i] == '-'){cout<<"0";}
            else if(s[i] == '='){cout<<"-";}


        }
        cout<<endl;
    }
    return 0;
}


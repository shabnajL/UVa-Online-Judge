#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
bool isLeapYear(int year){
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}
bool isHuluculu(int year)
{
    if (year%15==0) return true;
    else return false;
}
bool isBuluKulu(int year)
{
    if(isLeapYear(year)==1)
    {
        if (year%55==0) return true;
    }
    else return false;

}
int main()
{

    int Y;
    while(cin>>Y)
    {
        if(isLeapYear(Y)==1)
        {
             printf("This is leap year.\n");
        }
        if(isHuluculu(Y)==1){
            printf("This is huluculu festival year.\n");
        }

        if(isBuluKulu(Y)==1){
            printf("This is bulukulu festival year.\n");
        }
        if(isLeapYear(Y)==0 && isHuluculu(Y)==0 && isBuluKulu(Y)==0){
           printf("This is ordinary year.\n");
        }
        cout<<endl;
    }

    return 0;
}




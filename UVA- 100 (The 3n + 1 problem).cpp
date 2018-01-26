#include<iostream>
#include<math.h>
using namespace std;
int input(int n){
    int count = 0;
    while(n!=1)
    {
       if(n%2==1){
        n = (3*n) + 1;
        count++;
        }
        else{
            n = n/2;
            count++;
        }
    }

    return count;
}

int main()
{
    int i,j,res = 0;
    cin>>i>>j;
    for(int k = i;k<=j;k++)
    {
        res = input(k);
    }
    cout<<i<<' '<<j<<' '<<res<<' '<<endl;


    return 0;
}

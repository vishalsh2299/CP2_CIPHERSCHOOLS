#include<bits/stdc++.h>
using namespace std;

int power(int x, long y)
    {
        if( y == 0)
            return 1;
        if (y%2 == 0)
            return power(x, y/2)*power(x, y/2);
        return x*power(x, y/2)*power(x, y/2);
    }


int main()
{
    int n;
    cin>>n;

    int sum = 0,temp=n;
    int c=0;
    while(temp!=0){temp=temp/10; c++;}
    temp=n;
    while(temp!=0)
    {
        int a = temp%10;

        sum= sum+ power(a,c);
        temp/=10;
        //cout<<sum<<" "<<power(a,c)<<" ";
    }
   // cout<<sum<<" "<<c;
    if(sum == n) cout<<"Its armstrong number";
    else cout<<"Its not";
}


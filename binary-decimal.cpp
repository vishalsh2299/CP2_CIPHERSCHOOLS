#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int num=0,i=0;

    while(n!=0)
    {
        int a = n%10;
        num += a*floor(pow(2,i));
        i++;
        n/=10;
    }
    cout<<num;
}

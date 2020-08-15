#include<bits/stdc++.h>
using namespace std;

int nThFibonacci(int n)
{
    int a=0,b=1,sum=0;
    if(n == 0) return a;
    if(n == 1) return b;

    for(int i=2;i<=n;i++)
    {
        sum = a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;

    cout<<nThFibonacci(n);
    return 0;
}

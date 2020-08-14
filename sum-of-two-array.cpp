#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev;
}

int main()
{
    int a1[] = {9,9,9,9};
    int a2[] = {9,9,9,9};

    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);

    int add =0;

    int i=n1-1,j=n2-1,carry=0,sum=0;
    while(i>=0 && j>=0)
    {
        sum = sum*10 + (a1[i]+a2[j]+carry)%10;
        carry = (a1[i]+a2[j]+carry)/10;
        i--;
        j--;
    }

    if(i>=0){
        sum = sum*10 + (a1[i] + carry)%10;
        carry = (a1[i]+carry)/10;
        i--;
    } else if(j>=0)
    {
        sum = sum*10 + (a2[j] + carry)%10;
        carry = (a2[j]+carry)/10;
        j--;
    }

    while(carry!=0)
    {
        sum = sum*10 + carry%10;
        carry/=10;
    }

    cout<<reverse(sum);
}

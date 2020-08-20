#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]= {-7,1,5,2,-4,3,0};
    int n = sizeof(a)/sizeof(a[0]);
    int sum=0,suml=0;

    for(int i=0;i<n;i++) sum+=a[i];

    for(int i=0;i<n;i++){
        sum -= a[i];

        if(suml == sum) {cout<<i; break;}
        suml+= a[i];
    }
    if(suml!=sum) cout<<-1;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 7, 9, 5, 8, 7, 4};
    int k=5;
    int n = sizeof(a)/sizeof(a[0]);

    int i=0,j=n-1,swp=0;

    while(i<j){
        if(a[i] <= k) i++;
        if(a[j] <= k){swp++; j--;}
        else j--;
    }
    cout<<swp;
}

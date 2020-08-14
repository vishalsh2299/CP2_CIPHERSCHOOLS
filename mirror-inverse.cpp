#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[]= {1,2,3,0};//{3,4,2,0,1};
   int n = sizeof(a)/sizeof(a[0]);

   int b[n];

   memset(b,0,sizeof(b));

   for(int i=0;i<n;i++){
    if(a[a[i]] == i) {continue;}
    else {
        cout<<"not mirror image";
        return 0;
    }
   }

   cout<<"Mirror image";
   return 0;

}

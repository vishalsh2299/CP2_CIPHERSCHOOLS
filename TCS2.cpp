#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int n;
    cin>>n;

    vector<float> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<float> mx,my;
    int i=0;
    while(i<n)
    {
        float sum=0;
        int j=i;
        while(j<x && j<n){
            sum+=a[j];
            j++;
        }
        mx.push_back(sum/2);
        i+=x;
    }

    i=0;
     while(i<n)
    {
        float sum=0;
        int j=i;
        while(j<y && j<n){
            sum+=a[j];
            j++;
        }
        my.push_back(sum/2);
        i+=y;
    }

    int c=0,j=1;
    i=1;
    bool check = mx[0]>my[0]?true:false;
    char value = check? 'G':'S';
    while(i<mx.size() && j<my.size())
    {
       if(mx[i]>my[j]){
        if(check){c++; value='G';}
       }else
       {
           if(!check) {c++; value='S';}
       }
    }
}

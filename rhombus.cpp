#include<iostream>
using namespace std;

int main()
{
    // Solid Rhombus
    cout<<"Solid Rhomnbus"<<endl;
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<i;j++) cout<<" ";
        cout<<"****"<<endl;
    }
    cout<<endl<<endl;
    cout<<"Hollow Rhombus"<<endl;
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<i;j++) cout<<" ";
        if(i==4 || i==1)
        cout<<"****"<<endl;
        else
            cout<<"*  *"<<endl;
    }
}

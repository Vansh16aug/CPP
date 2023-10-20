#include<bits/stdc++.h>
using namespace std;
int main()
{
    float *p=new float;
    float *r=new float;
    float *t=new float;

    cout<<"Enter the principal ammount :";
    cin>>*p;
    cout<<"Enter the rate of interest :";
    cin>>*r;
    cout<<"Enter the  time :";
    cin>>*t;
    
    float *si= new float;
    *si=(*p)*(*r)*(*t)/100;
    cout<<"The simple interest is :"<<*si<<endl;
    return 0;
}
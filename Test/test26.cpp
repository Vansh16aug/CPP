#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
class Icecream{
    public:
    void Quantity(int r){
        float h;
        h=r*r*r;
        cout<<fixed<<setprecision(2)<<h;
    }
    void Quantity(int r,int h){
        float k,pi;
        k=0.33*M_PI*r*r*h;
        cout<<fixed<<setprecision(2)<<k;
    }
};int main(){
    int t;
    cin>>t;
    
    Icecream p;
    if(t==1)
    {
        int k;
        cin>>k;
    p.Quantity(k);
    }
    else
    {
        int a,b;
        cin>>a>>b;
    p.Quantity(a,b);
    }
}
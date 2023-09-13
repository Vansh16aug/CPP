#include<bits/stdc++.h>
using namespace std;
class Area{
    
    float r;
    float pi;
    public:
    Area(float radius,float pii){
        r=radius;
        pi=pii;
    }
    void print(){
        float area=pi*r*r;
        cout<<"area of circle is :"<<area<<endl;
    }
};
int main()
{
    float r;
    cout<<"Enter the radius of circle :"<<endl;
    cin>>r;
    float pii=3.14;

    Area obj(r,pii);
    
    obj.print();

    return 0;
}
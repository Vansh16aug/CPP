#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int x;
    A(int a){
        x=a;
        cout<<"Calling base class constructor "<<x<<endl;
    }
    ~A(){
        cout<<"Calling base class destructor"<<endl;
    }
};
class B:public A{
    public:
    int i;
    B(int p):A(p){
        i=p;
        cout<<"Calling derived class constructor "<<i<<endl;
    }
    ~B(){
        cout<<"Calling derived class destructor"<<endl;
    }
};
int main()
{
    B b(1);
    return 0;
}
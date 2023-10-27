#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void abc(){
        cout<<"Inside class A"<<endl;
    }
    void xyz(){
        cout<<"Inside class A"<<endl;
    }
};
class B:public A{
    public:
    void abc(){
        cout<<"Inside class B"<<endl;
    }
    void xyz(){
        cout<<"Inside class B"<<endl;
    }
};
int main()
{
    A *a;
    B b;
    a=&b;
    a->abc();
    a->xyz();
    return 0;
}
//in case of multilevel inheritance A->B->C->D (constructor) and D->C->B->A (destructor)
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"In A constructor"<<endl;
    }
    ~A(){
        cout<<"In A destructor"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"In B constructor"<<endl;
    }
    ~B(){
        cout<<"In B destructor"<<endl;
    }
};
class C:public B{
    public:
    C(){
        cout<<"In C constructor"<<endl;
    }
    ~C(){
        cout<<"In C destructor"<<endl;
    }
};
class D:public C{
    public:
    D(){
        cout<<"In D constructor"<<endl;
    }
    ~D(){
        cout<<"In D destructor"<<endl;
    }
};
int main()
{
    D d;
    return 0;
}
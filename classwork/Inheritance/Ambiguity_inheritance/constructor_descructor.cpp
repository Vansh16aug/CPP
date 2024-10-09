#include<iostream>
using namespace std;
class A{
public:
    A(){
        cout<<"I am in constructor of A"<<endl;
    }
    void func(){
        cout<<"I m inside a func "<<endl;
    }
    ~A(){
        cout<<"In destructor of class A"<<endl;
    }
};
class B:public A{
public:
    B(){
        cout<<"I am in constructor of B"<<endl;
    }
    
    ~B(){
        cout<<"In destructor of class B"<<endl;
    }
};
int main()
{
    B b;
    // A a;
    // a.func();
    // b.display();
    return 0;
}
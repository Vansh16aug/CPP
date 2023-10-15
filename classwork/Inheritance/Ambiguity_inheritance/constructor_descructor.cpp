#include<iostream>
using namespace std;
class A{
public:
    A(){
        cout<<"I am in constructor of A"<<endl;
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
    // b.display();
    return 0;
}
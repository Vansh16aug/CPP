#include<iostream>
using namespace std;
class A{
    public:
    void displayA(){
        cout<<"Hello i m in class A"<<endl;
    }
};
class B:public A{
    public:
    void displayB(){
        cout<<"Hello i m in class B"<<endl;
    }
};
class C:public A{
    public:
    void displayC(){
        cout<<"Hello i m in class C"<<endl;
    }
};
int main()
{
    B b;
    C c;
    b.displayA();
    c.displayA();
    b.displayB();
    c.displayC();
    return 0;
}
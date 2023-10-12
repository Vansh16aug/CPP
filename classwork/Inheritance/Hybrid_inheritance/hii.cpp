#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"I am in Class A"<<endl;
    }
};
class B:public A{
    public:
    void showB(){
        cout<<"I am in class B"<<endl;
    }
};

class D{
    public:
    void showD(){
        cout<<"I am in class D"<<endl;
    }
};
class C:public B,public D{
    public:
    void showC(){
        cout<<"I am in class C"<<endl;
    }
};
int main()
{
    B b;
    C c;
    cout<<"Accessing Class A using Class B"<<endl;
    b.showA();
    cout<<"Accessing every class using Class C"<<endl;
    c.showA();
    c.showB();
    c.showC();
    c.showD();
    return 0;
}
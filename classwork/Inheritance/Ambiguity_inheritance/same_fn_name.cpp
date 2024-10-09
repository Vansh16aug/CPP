#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void show_data(){
        cout<<"I m in class A "<<endl;
    }
};
class B{
    public:
    void show_data(){
        cout<<"I m in class B "<<endl;
    }
};
class C:public A,public B{
    public:
    void show_data(){
        cout<<"Calling from class C"<<endl;
        // A::show_data();
        // B::show_data();
    }
};
int main()
{
    C c;
    c.show_data();// Ambiguity Problem

    c.A::show_data();
    c.B::show_data();
    return 0;
}
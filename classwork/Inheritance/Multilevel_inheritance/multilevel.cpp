#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void printA(){
        cout<<"I m in class A"<<endl;
    }
};
class B:public A{
    public:
    void printB(){
        cout<<"I m in class B"<<endl;
    }
};
class C:public B{
    public:
    void printC(){
        printA();
        printB();
        cout<<"I m in class C"<<endl;
    }
};
int main()
{
    C c;
    c.printC();
    return 0;
}
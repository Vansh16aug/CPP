#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int x;
    void set(int a){
        x=a;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"Value of x derived from Class A in Class B :"<<x<<endl;
    }
};
class C:public A{
    public:
    void display(){
        cout<<"Value of x derived from Class A in Class C :"<<x<<endl;
    }
};
int main()
{
    B b;
    C c;
    b.set(20);
    b.display();
    c.set(50);
    c.display();
    return 0;
}
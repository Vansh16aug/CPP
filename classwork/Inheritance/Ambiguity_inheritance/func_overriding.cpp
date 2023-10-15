#include<iostream>
using namespace std;
class A{
    public:
    void show_data(){
        cout<<"I m in class A "<<endl;
    }
};
class B:public A{
    public:
    void show_data(){
        cout<<"I m in a class B "<<endl;
    }
};
int main()
{
    B b;
    b.A::show_data();
    b.show_data();
    return 0;
}
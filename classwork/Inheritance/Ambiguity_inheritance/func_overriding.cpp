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
    void show_data();   //declare
};
void B::show_data(){     //define
    cout<<"rxdcfgvbhjn";
}
int main()
{
    B b;
    b.A::show_data();
    b.show_data();
    return 0;
}
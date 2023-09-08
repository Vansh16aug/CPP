#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
    void func(int b){
        cout<<"Value of b is :"<<b<<endl;
    }
};
int main()
{
    int A::*ptr1=&A::a; //pointer to a data member of class
    void (A::*ptr2)(int)=&A::func;  //pointer to a  member function of class
    A obj;
    obj.*ptr1=10;
    cout<<"Value of a is :"<<obj.*ptr1<<endl;
    (obj.*ptr2)(20);


    A *ptr;

    // using pointer to object
    ptr->a=10;
    cout<<"Value of a is :"<<ptr->a<<endl;
    ptr->func(20);
    return 0;
}
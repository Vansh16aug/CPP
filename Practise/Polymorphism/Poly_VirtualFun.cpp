#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"Base class"<<endl;
    }
     show(){
        cout<<"Base class"<<endl;
    }
};
class derived:public base{
    public:
    void print(){
        cout<<"derived class"<<endl;
    }
    void show(){
        cout<<"derived class"<<endl;
    }
};
int main()
{
    base* bptr;
    derived d;
    bptr=&d;
    bptr->show();
    bptr->print();
    return 0;
}
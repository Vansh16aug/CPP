#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base constructor"<<endl;
    }
    virtual~base(){
        cout<<"Base destructor"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"derived constructor"<<endl;
    }
    ~derived(){
        cout<<"derived destructor"<<endl;
    }
};

int main()
{
    base* b=new derived;
    delete b;
    return 0;
}
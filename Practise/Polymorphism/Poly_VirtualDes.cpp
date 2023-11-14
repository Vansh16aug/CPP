#include<bits/stdc++.h>
using namespace std;
class Base{ 
    public:
    Base(){
        cout<<"Base Constructor"<<endl;
    }
    virtual~Base(){
        cout<<"Base Destructor"<<endl;
    }
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived Constructor"<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructor"<<endl;
    }
};
int main()
{
    Base* base=new Base();
    delete base;
    cout<<"------------------------------------------\n";
    Derived* derived=new Derived();
    delete derived;
    cout<<"------------------------------------------\n";
    Base* poly=new Derived();
    delete poly;
    return 0;
}
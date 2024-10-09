#include<bits/stdc++.h>
using namespace std;
class A{
    protected:
    int x;
    public:
    void get_dataA(){
        cout<<"Enter value of x :";
        cin>>x;
    }
};
class B:public virtual A{
    protected:
    int y;
    public:
    void get_dataB(){
        cout<<"Enter value of y :";
        cin>>y;
    }
};
class C:public virtual A{
    protected:
    int z;
    public:
    void get_dataC(){
        cout<<"Enter value of z :";
        cin>>z;
    }
};
class D:public virtual B,public virtual C{
    public:
    void sum(){
        int result;
        result=x+y+z;
        cout<<"Result is :"<<result;
    }
};
int main()
{
    D d;
    d.get_dataB();
    d.get_dataA();
    d.get_dataC();
    d.sum();
    return 0;
}
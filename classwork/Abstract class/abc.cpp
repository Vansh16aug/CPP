#include<bits/stdc++.h>
using namespace std;
class Abstract{
public:
    virtual void show()=0;
};
class A:public Abstract{
    public:
    void show(){
        cout<<"In inherited from abstract class";
    }
};
int main()
{
    A a;
    a.show();
    return 0;
}
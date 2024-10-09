#include<bits/stdc++.h>
using namespace std;
class A{
public:
    A(){
        cout<<"In A"<<endl;
    }
};
class B:public A{
public:
    B(){
        cout<<"In B"<<endl;
    }
};
class C:public A{
public:
    C(){
        cout<<"In C"<<endl;
    }
};
int main()
{
    C c;
    B b;
    return 0;
}

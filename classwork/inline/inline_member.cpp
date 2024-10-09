// inline member function
#include<iostream>
using namespace std;

class Operations{
    int a,b,add,sub;
    public:
        void get(){
            cout<<"Enter first value :";
            cin>>a;
            cout<<endl;
            cout<<"Enter second value :";
            cin>>b;
            cout<<endl;
        }
        void sum();
};

inline void Operations::sum(){
    add=a+b;
    sub=a-b;

    cout<<"Addition of 2 numbers is :"<<add<<endl;    
    cout<<"Subtraction of 2 numbers is :"<<sub;    
}
int main()
{
    Operations op;
    op.get();
    op.sum();
    return 0;
}

//constructor is a member function it has same name as that of class ,no return type



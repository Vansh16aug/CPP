// write a program to find the multiplication values and cubic values using inline func
#include<iostream>
using namespace std;
class Operations{
    int a,b,mult,cubi;
    public:
        void get(){
            cout<<"Enter first value :";
            cin>>a;
            // cout<<endl;
            cout<<"Enter second value :";
            cin>>b;
        }
        void mul();
        void cub();
};

inline void Operations::mul(){
    int mult=a*b;
    cout<<"Multiplication value is :"<<mult<<endl;  
}
inline void Operations::cub(){
    int cubi=a*a*a;
    cout<<"Cubic value of "<<a<< " (first) is :"<<cubi<<endl;  
}
int main()
{
    Operations op;
    op.get();
    op.mul();
    op.cub();
    return 0;
}
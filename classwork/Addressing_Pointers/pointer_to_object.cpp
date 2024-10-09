#include<bits/stdc++.h>
using namespace std;
class A{
    int x=5;
    public:
    // void get(){
    //     cout<<"Enter the value of x is :";
    //     cin>>x;
    //     cout<<endl;
    // }
    void show(){
        cout<<"The value of x is :"<<x<<endl;
    }
};
int main()
{
    A obj1;
    A *ptr;
    ptr=&obj1;
    cout<<"Calling using simple Object :"<<endl;
    // obj1.get(); 
    obj1.show();
    cout<<endl;
    cout<<"Calling using pointer to objects :"<<endl;
    // ptr->get(); 
    ptr->show();
    cout<<endl;
    cout<<"Calling using pointer but diff syntax :"<<endl;
    // (*ptr).get();
    (*ptr).show();
    return 0;
}
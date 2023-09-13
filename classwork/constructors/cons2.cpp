//2 constructors 1st has 1 parameter and 2nd has 2 parameters and call these 2 constructors with diff objects
#include<bits/stdc++.h>
using namespace std;
class Vans{
    int roll;
    int reggno;
    int Class;
    public:
    Vans(int r);
    Vans(int regg , int Class1){
        reggno=regg;
        Class=Class1;
        roll=0;
    }
    void print(){
        cout<<"The Roll number is :"<<roll<<endl;
        cout<<"The Regg number is :"<<reggno<<endl;
        cout<<"The Class is :"<<Class<<endl;
    }
};
Vans::Vans(int r){
        roll=r;
        reggno=0;
        Class=0;
    }
int main()
{
    int r;
    cout<<"Enter roll :";
    cin>>r;
    int regg;
    cout<<"Enter regg :";
    cin>>regg;
    int Class1;
    cout<<"Enter class :";
    cin>>Class1;
    Vans v (r);
    v .print();
    v= Vans (regg,Class1); 
    v .print();
    return 0;
}
#include<iostream>
using namespace std;
class sum{
    public:
    int a,b;
    sum(){
        b=50;
    }
    int operator+(sum s1){
        return (a+s1.b);
    }
    void get_data(){
        cout<<"Enter a:";
        cin>>a;
    }
};
int main()
{
    sum s,t;
    int d;
    s.get_data();
    d=s+t;
    cout<<"Sum :"<<d<<endl;
    // d=s.operator+(t);
    // cout<<"Sum :"<<d;
    return 0;
}
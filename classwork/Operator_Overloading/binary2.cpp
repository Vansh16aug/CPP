#include<bits/stdc++.h>
using namespace std;
class Complex{
    int x,y;
    public:
    Complex(){
        x=10;
        y=20;
    }
    Complex(int a,int b){
        x=a;
        y=b;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
    void show(){
        cout<<x<<"+i"<<y;
    }
};
int main()
{
    Complex c1(2,3),c2(4,5),c3;
    c3=c1+c2;
    c3.show();
    return 0;
}
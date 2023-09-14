#include<bits/stdc++.h>
using namespace std;
class counter{
    int c;
    public:
        counter(int a){ // single parameter constructor
            c=a;
        }
        counter(counter &ob){   // copy constructor
            cout<<"copy constructor invoked"<<endl;
            c=ob.c;
        }
        void show(){
            cout<<c;
        }
};
int main()
{
    counter c1(10);
    counter c2(c1);
    c1.show();
    cout<<endl;
    c2.show();
    return 0;
}
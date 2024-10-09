#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    public:
        void getData(){
            cout<<a;
        }
        void setdata(int a){
            this->a=a;
        }
};
int main()
{
    A a;
    a.setdata(4);
    a.getData();
    return 0;
}
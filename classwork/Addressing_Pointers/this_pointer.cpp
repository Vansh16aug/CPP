#include<bits/stdc++.h>
using namespace std;
class X{
    private:
    int a;
    public:
    void set(int a){
        this->a=a;
    }
    void print(){
        cout<<"a = "<<a<<endl;
    }
};
int main()
{
    X obj;
    int a=5;
    obj.set(a);
    obj.print();

    //using pointer to object
    X *ptr;
    ptr->set(a);
    ptr->print();
    return 0;
}
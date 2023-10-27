#include<iostream>
#include<header.h>
using namespace std;
class abc:public ABC{
    public:
    void show(){
        cout<<"I m accessing the header file , header.h"<<endl;
    }
};
int main()
{
    abc a;
    a.show();
    return 0;
}
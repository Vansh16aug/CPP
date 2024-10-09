#include<bits/stdc++.h>
using namespace std;
class ex{
    const char* ptr;
public:
    ex(){
        ptr=new char[8];
        ptr="Dynamic";
    }
    void show(){
        cout<<ptr<<endl;
    }
};
int main()
{
    ex *ptr=new ex();
    ptr->show();
    return 0;
}
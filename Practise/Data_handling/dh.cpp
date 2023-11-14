#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"I m in constructor "<<endl;
    }
    void func(){
        cout<<"I m in function"<<endl;
    }
    ~A(){
        cout<<"I m in destructor"<<endl;
    }
};
int main()
{
    A a;
    a.func();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class File{
    File(){

    }
    ~File(){
        
    }
};
int main()
{

    return 0;
}
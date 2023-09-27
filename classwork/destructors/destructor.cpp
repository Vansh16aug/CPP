#include<iostream>
using namespace std;
class Me{
    int id;
public:
    Me(int num){
        id=num;
        cout<<"constructor of object with id :"<<id<<endl;
    }
    ~Me(){
        cout<<"Destructor of object with id :"<<id<<endl;
    }
};
int main()
{
    Me m1(1);
    Me m2(2);
    
    Me m3(3);
    cout<<"-------------------------END-------------------------"<<endl;
    return 0;
}
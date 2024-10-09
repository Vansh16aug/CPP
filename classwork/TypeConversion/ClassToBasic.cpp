// CLASS TO BASIC
#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    float fees;
    public:
    Student(int a,float m){
        rollno=a;
        fees=m;
    }
    operator int(){     // conversion of class to int
        return(rollno);
    }
    operator float(){       // conversion to class to float
        return (fees);
    }
};
int main()
{
    int j;
    float f;
    Student st(5,4200.50);
    j=st;   //operator int() is working
    f=st;   //operator float() is working
    cout<<"Value of j :"<<j<<endl;
    cout<<"Value of f :"<<f<<endl;
    return 0;
}
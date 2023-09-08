#include<bits/stdc++.h>
using namespace std;
struct student{
    int rollno;
    int reggno;
};
struct school{
    student s;
};
struct university{
    school sh;
};

int main()
{
    university u;
    int &ref1=u.sh.s.rollno;
    int &ref2=u.sh.s.reggno;
    ref1=58;
    ref2=12200660;
    cout<<"The roll number :"<<ref1<<endl;
    cout<<"The regg number :"<<ref2<<endl;
    return 0;
}
//info of student by class and print it
#include<iostream>
using namespace std;
class Student{
    int reggno;
    int name;

    public:
        void getdata(int reggno , int rollno){
            cout<<"Regg number :";
            cin>>reggno;
            cout<<endl;
            cout<<"Rollno :";
            cin>>rollno;
        }
        void printit(){
            cout<<"Regg number :"<<reggno<<endl;
            cout<<"Rollno :"<<rollno<<endl;
        }

};
int main()
{
    Student st;
    cout<<"Stuent record 1"<<endl;
    st.getdata(12200660 , vansh);
    st.printit();
    return 0;
}
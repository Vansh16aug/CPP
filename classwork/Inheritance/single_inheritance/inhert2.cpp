// create a program in which we have 2 classes in which one is university and student , student inherit the property of university in public mode . In this program try to access the members of university using the object of student class.
#include<iostream>
using namespace std;
class University{
protected:
    int noOfStudent;
    char NameOfSchool[20];
public:
    void getNumber(){
        cout<<"Enter the number of students :";
        cin>>noOfStudent;
        cout<<endl;
    }
    void showData(){
        cout<<"Number of students in University :"<<noOfStudent<<endl;
    }
};
class Student:public University{
private:
    float fees;
public:
    void getData(){
        getNumber();
        cout<<"Enter name of school :";
        cin>>NameOfSchool;
        cout<<"Enter fees :";
        cin>>fees;
    }
    void display(){
        showData();
        cout<<"Name of school is :"<<NameOfSchool<<endl;
        cout<<"Fees is :"<<fees<<endl;
    }
};
int main()
{
    Student st;
    st.getData();
    st.display();
    return 0;
}
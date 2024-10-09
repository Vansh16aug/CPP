#include<iostream>
using namespace std;
class Student{
    int id;
    float marks;
public:
    void input(){
        cout<<"\nEnter the student id :";
        cin>>id;
        cout<<"Enter the student's marks :";
        cin>>marks;
    }
    void display(){
        cout<<"The id of the student is :"<<id<<endl;
        cout<<"The marks of student :"<<marks<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of students :";
    cin>>n;
    Student *s=new Student[n];
    Student *d=s;
    Student *flag=s;
    if(s==NULL){
        cout<<"Memory allocation failure "<<endl;
        exit(1);
    }
    for(int i=0;i<n;i++){
        cout<<"\nEnter the values for "<<i+1<<" student ";
        s->input();
        s++;
    }
    for(int i=0;i<n;i++){
        d->display();
        d++;
    }
    delete[] flag;
    return 0;
}
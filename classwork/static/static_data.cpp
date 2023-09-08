
//w.a.p.to count number of object created in main;
#include<iostream>
using namespace std;
class Student{
    private:
    int a;
    public:
    void getdata(){
        cin>>a;
    }
    void putdata(){
        cout<<a;
    }
    static int count;
    Student(){
        count++;
    }
};
int Student::count=0;
int main(){
    Student s1,s2,s3;
    s1.getdata();
    s1.putdata();
    s2.getdata();
    s2.putdata();
    s3.getdata();
    s3.putdata();
    cout<<"\nNumber of count is "<<Student::count;
}
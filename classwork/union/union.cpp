#include<iostream>
using namespace std;
union Student{
    int roll;
    char name[50];
};
int main()
{
    Student data;
    cout<<"Enter rollno :";
    cin>>data.roll;
    cout<<"Roll no ="<<data.roll<<endl;
    cout<<"Enter name =";
    cin>>data.name;
    cout<<"Name ="<<data.name;
    return 0;
}

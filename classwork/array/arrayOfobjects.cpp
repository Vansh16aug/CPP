//program to enter data of n number of students and then display them all in interactive way , using classes

// #include<iostream>
// using namespace std;
// class Student{
//     private:
//         string name;
//         int roll;
//         int marks;
//     public:
//         void get_data(string x,int y,int z){
//             name=x;
//             roll=y;
//             marks=z;
//         }
//         void display(){
//             cout<<"The name of the student is :"<<name<<endl;
//             cout<<"The roll number of the student is :"<<roll<<endl;
//             cout<<"The marks of the student is :"<<marks<<endl;
//         }
// };
// int main()
// {
//     int n;
//     cout<<"Enter the number of students :";
//     cin>>n;
//     Student obj[n];
//     for(int i=1;i<n+1;i++){
//         string name;
//         int roll;
//         int marks;
//         cout<<"Enter the name of the "<<i<<" student :"<<endl;
//         cin>>name;
//         cout<<"Enter the roll number of the "<<i<<"student :"<<endl;
//         cin>>roll;
//         cout<<"Enter the marks of the "<<i<<"student :"<<endl;
//         cin>>marks;
//         obj[i].get_data(name,roll,marks);
//     }
//     for(int i=0;i<n;i++){
//         obj[i].display();
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        string name;
        int roll;
        int marks;
    public:
        void get_data(string x,int y,int z){
            name=x;
            roll=y;
            marks=z;
        }
        void display(){
            cout<<"The name of the student is :"<<name<<endl;
            cout<<"The roll number of the student is :"<<roll<<endl;
            cout<<"The marks of the student is :"<<marks<<endl;
            cout<<endl;
            cout<<"**********************************************************************************";
            cout<<endl;
        }
};
int main()
{
    int n;
    cout<<"Enter the number of students :";
    cin>>n;
    Student obj[n];
    string name[n];
    int roll[n];
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the name of the "<<i+1<<" student :"<<endl;
        cin>>name[i];
        cout<<"Enter the roll number of the "<<i+1<<"student :"<<endl;
        cin>>roll[i];
        cout<<"Enter the marks of the "<<i+1<<"student :"<<endl;
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        obj[i].get_data(name[i],roll[i],marks[i]);
    }
    for(int i=0;i<n;i++){
        cout<<"The name of the student is :"<<name[i]<<endl;
        cout<<"The roll number of the student is :"<<roll[i]<<endl;
        cout<<"The marks of the student is :"<<marks[i]<<endl;
    }

    return 0;
}
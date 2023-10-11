#include<bits/stdc++.h>
using namespace std;
class A{
private:
    int rollno;
protected:
    char section[10];
public:
    void get_roll(){
        cout<<"Enter rollno of student :";
        cin>>rollno;
    }
    void show_roll(){
        cout<<"The rollno of student is :";
        cout<<rollno<<endl;
    }
};
class B:private A{
private:
    int fees;
public:
    void get_data(){
        get_roll();
        cout<<"Enter fees :";
        cin>>fees;
        cout<<"\nEnter section :";
        cin>>section;
    }
    void display(){
        show_roll();
        cout<<"The fees is :"<<fees<<endl;
        cout<<"The section is :"<<section<<endl;
    }
};
int main()
{
    B b;
    b.get_data();
    b.display();
    //b.get_roll();  can't access this as the class B is inherited in private mode
    //b.show_roll();  
    return 0;
}